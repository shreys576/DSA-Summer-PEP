#include <iostream>
#include <vector>
#include <queue>
using namespace std;

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
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout << node << " ";
        for(int neighbours: adj[node]){
            if(!visited[neighbours]){
                q.push(neighbours);
                visited[neighbours] = true;
            }
        }
    }
}