#include<iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
// calculate the sum of all elements in each row of a 2D array
void rowSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}
// print the value of max sum and also its row index
void maxRowSum (int arr[][3], int row, int col){
    int maxSum = 0;
    int rowIndex = -1;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout << "Max sum: " << maxSum << " at row index: " << rowIndex << endl;
}
// if multiple rows have the same max sum, return index of last row
void maxRowSumLast (int arr[][3], int row, int col){
    int maxSum = 0;
    int rowIndex = -1;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum >= maxSum){
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout << "Max sum: " << maxSum << " at row index: " << rowIndex << endl;
}

int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9};
    rowSum(arr, 3, 3);
    maxRowSum(arr, 3, 3);
    maxRowSumLast(arr, 3, 3);
}