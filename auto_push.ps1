$repoPath = 'C:\Users\DELL\OneDrive\Desktop\DSA with cpp'
$logPath = Join-Path $repoPath 'auto_push.log'
$watcher = New-Object System.IO.FileSystemWatcher
$watcher.Path = $repoPath
$watcher.Filter = '*'
$watcher.IncludeSubdirectories = $true
$watcher.EnableRaisingEvents = $true

$lastRun = Get-Date
$debounceSeconds = 3

$action = {
    param($source, $eventArgs)
    try {
        Start-Sleep -Seconds $debounceSeconds
        Set-Location $repoPath
        $status = git status --porcelain
        if ([string]::IsNullOrWhiteSpace($status)) {
            Add-Content -Path $logPath -Value "$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss') No changes detected"
            return
        }

        git add . | Out-Null
        $commitMessage = "Auto update $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"
        git commit -m $commitMessage | Out-Null
        git push origin main | Out-Null
        Add-Content -Path $logPath -Value "$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss') Pushed changes"
    }
    catch {
        Add-Content -Path $logPath -Value "$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss') ERROR: $($_.Exception.Message)"
    }
}

$handlers = Register-ObjectEvent $watcher 'Changed' -Action $action
Register-ObjectEvent $watcher 'Created' -Action $action | Out-Null
Register-ObjectEvent $watcher 'Deleted' -Action $action | Out-Null
Register-ObjectEvent $watcher 'Renamed' -Action $action | Out-Null

Add-Content -Path $logPath -Value "$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss') Auto-push watcher started"
while ($true) { Start-Sleep -Seconds 10 }
