#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

int main (){
    int m;
    int n;

    cout << "Enter the number of vertices : ";
    cin >> n;
    cout << "Enter the number of edges : ";
    cin >> m;

    unordered_map<int, list<int>> adjList;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout << "Adjacency list : " << endl; 
    for (auto i : adjList) {
        cout << i.first << " -> ";
        for (auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }
}