//Graph implementation with adjacency list with DFS and BFS utility
#include <bits/stdc++.h>
using namespace std;

map<int,bool> visited;    //clear visited when needed

struct graph {
    map<int,list<int>> adj;

    void addEdge(int u, int v) {
        adj[u].pb(v);
        adj[v].pb(u);   //comment if directed graph
    }
  //DEPTH FIRST SEARCH
    void DFS(int u) {
        visited[u]=1;
        cout <<u <<sp;
        for (auto it:adj[u]) {
            if (!visited[it]) {
                DFS(it);
            }
        }
    }
  //BREADTH FIRST SEARCH
    void BFS(int u) {
        queue<int> q;
        visited[u]=1;
        q.push(u);
        while (!q.empty()) {
            int s=q.front();
            cout <<s <<sp;
            q.pop();

            for (auto i:adj[s]) {
                if (!visited[i]) {
                    visited[i]=1;
                    q.push(i);
                }
            }
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    graph gp;
    return 0;
}
