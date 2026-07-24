#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // compute indegree of each vertex
        // push all vertices with indegree 0 into a queue
        // remove each node one by one from queue and add it to the answer
        // for each remove node, decrease the indegree of its neighbors by 1
        // if any neighbor's indegree becomes 0, push it into the queue
        // number of visited nodes != number of vertices, then there is a cycle in the graph

        vector<vector<int>> adj(V);
        vector<int> indegree(V, 0);

        for (auto &edge : edges) {
            if (edge.size() >= 2) {
                int u = edge[0];
                int v = edge[1];
                adj[u].push_back(v);
                indegree[v]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < V; ++i) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> order;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            order.push_back(node);

            for (int neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        return order;
    }
};

int main() {
    int V = 6;
    vector<vector<int>> edges = {
        {5, 2}, {5, 0}, {4, 0}, {4, 1}, {2, 3}, {3, 1}
    };

    Solution solution;
    vector<int> result = solution.topoSort(V, edges);

    for (int node : result) {
        cout << node << " ";
    }
    cout << '\n';

    return 0;
}
