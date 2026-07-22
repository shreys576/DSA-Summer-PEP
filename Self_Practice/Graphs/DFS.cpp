#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited){
    visited[node] = true;

    cout << node << " ";
    for(int i : adj[node]){
        if(!visited[i]){
            dfs(i, adj, visited);
        }
    }
}

int main(){
    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<vector<int>> adj(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cout << "For vertex edge " << i + 1 << endl;    
        cout << "Enter First vertex in edge: ";
        cin >> a;
        cout << "Enter Second vertex in edge: ";
        cin >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(adj.size(), false);
    int node = 0;
    dfs(node, adj, visited);
}