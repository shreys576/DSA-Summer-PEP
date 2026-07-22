#include <iostream>
#include <vector>
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

    cout << "Final Adjacency List: " << endl;

    for(int i = 0; i < n; i++){
        cout << i << " -> ";
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << ", ";
        }
        cout << endl;
    } 
}