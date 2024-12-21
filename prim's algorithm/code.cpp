#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

void primMST(vector<vector<pii>>& graph, int V) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<bool> inMST(V, false);
    vector<int> key(V, INT_MAX);
    vector<int> parent(V, -1);

    key[0] = 0;  
    pq.push({0, 0}); 
    while (!pq.empty()) {
        int u = pq.top().second; 
        pq.pop();

        if (inMST[u]) continue;
        inMST[u] = true;

        for (auto& [weight, v] : graph[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    cout << "Edges in the MST:" << endl;
    int mstWeight = 0;
    for (int i = 1; i < V; i++) {
        if (parent[i] != -1) {
            cout << "Edge: " << parent[i] << " - " << i << " | Weight: " << key[i] << endl;
            mstWeight += key[i];
        }
    }
    cout << "Total weight of the MST: " << mstWeight << endl;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<pii>> graph(V);
    for (int i = 0; i < E; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u].push_back({weight, v});
        graph[v].push_back({weight, u});
    }

    primMST(graph, V);

    return 0;
}
