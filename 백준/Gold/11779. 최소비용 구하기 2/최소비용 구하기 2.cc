#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 1e9;
int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;

    vector<pair<int, int>> adj[n + 1];
    int startP, endP, w;
    while(m--){
        cin >> startP >> endP >> w;
        adj[startP].push_back({endP, w});
    }

    cin >> startP >> endP;

    vector<int> dist(n + 1, INF);
    vector<int> par(n + 1, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[startP] = 0;
    pq.push({0, startP});

    while(!pq.empty()){
        int costC = pq.top().first;
        int nodeC = pq.top().second;

        pq.pop();
        
        if(costC > dist[nodeC]) continue;

        for(int i = 0; i < adj[nodeC].size(); i++){
            int nodeN = adj[nodeC][i].first;
            int weightN = adj[nodeC][i].second;

            if(dist[nodeC] + weightN < dist[nodeN]){
                dist[nodeN] = dist[nodeC] + weightN;
                par[nodeN] = nodeC;
                pq.push({dist[nodeN], nodeN});
            }
        }
    }

    cout << dist[endP] << '\n';

    vector<int> path;
    int current = endP;
    
    while(current != 0){
        path.push_back(current);
        current = par[current];
    }

    reverse(path.begin(), path.end());

    cout << path.size() << '\n';
    for(int i = 0; i < path.size(); i++)
        cout << path[i] << ' ';
}