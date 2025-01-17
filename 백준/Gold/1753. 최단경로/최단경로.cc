#include <iostream>
#include <vector>
#include <queue>

#define MAX 20010
#define INF 987654321

using namespace std;

int V, E, K;
int D[MAX];
vector<pair<int, int>> Ver[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> V >> E >> K;
    
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        
        Ver[u].push_back(make_pair(v, w));
    }
    
    for(int i = 1; i <= V; i++) D[i] = 987654321;

    priority_queue<pair<int, int>> PQ;
    PQ.push(make_pair(0, K));
    D[K] = 0;
    
    while(!PQ.empty()){
        int cost = -PQ.top().first;
        int cur = PQ.top().second;
        PQ.pop();
        
        for(int i = 0; i < Ver[cur].size(); i++){
            int next = Ver[cur][i].first;
            int ncost = Ver[cur][i].second;
            
            if(D[next] > cost + ncost){
                D[next] = cost + ncost;
                PQ.push(make_pair(-D[next], next));
            }
        }
    }
    
    for(int i = 1; i <= V; i++){
        if(D[i] == INF) cout << "INF\n";
        else cout << D[i] << '\n';
    }
}