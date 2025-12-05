#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                visited[neigh] = true;
                q.push(neigh);
            }
        }
    }
}

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int neigh : adj[node]) {
        if (!visited[neigh])
            dfs(neigh, adj, visited);
    }
}


#include <algorithm>
struct Edge {
    int u, v, w;
};
int find(int x, vector<int>& parent) {
    if (parent[x] != x) parent[x] = find(parent[x], parent);
    return parent[x];
}
void kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), [](Edge a, Edge b){ return a.w < b.w; });
    vector<int> parent(n);
    for (int i = 0; i < n; i++) parent[i] = i;
    int total = 0;
    for (auto& e : edges) {
        int x = find(e.u, parent), y = find(e.v, parent);
        if (x != y) {
            cout << e.u << " - " << e.v << " : " << e.w << endl;
            total += e.w;
            parent[x] = y;
        }
    }
    cout << total << endl;
}


#include <set>
void prim(vector<vector<pair<int, int>>>& adj, int n) {
    vector<int> key(n, 1e9), parent(n, -1);
    vector<bool> inMST(n, false);
    key[0] = 0;
    set<pair<int, int>> pq;
    pq.insert({0, 0});
    int cost = 0;
    while (!pq.empty()) {
        int u = pq.begin()->second;
        cost += pq.begin()->first;
        pq.erase(pq.begin());
        inMST[u] = true;
        for (auto& it : adj[u]) {
            int v = it.first, w = it.second;
            if (!inMST[v] && w < key[v]) {
                pq.erase({key[v], v});
                key[v] = w;
                parent[v] = u;
                pq.insert({key[v], v});
            }
        }
    }
    cout << cost << endl;
}
