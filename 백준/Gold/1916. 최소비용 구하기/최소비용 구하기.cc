#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 1e9

using namespace std;

int N, M, A, B;
vector<vector<pair<int, int>>> costBus;
vector<int> dist;

void solve(int a, int b){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    dist.resize(N + 1, MAX);
    
    q.push({0, a});
    dist[a] = 0;
    
    while(!q.empty()){
        int curDis = q.top().first;
        int curCity = q.top().second;
        q.pop();
        
        if(curDis > dist[curCity])
            continue;
        // 이미 처리된 경우
        
        for(int i = 0; i < costBus[curCity].size(); i++){
            int nCity = costBus[curCity][i].first;
            int nDis = curDis + costBus[curCity][i].second;
            
            if(nDis < dist[nCity]){
                dist[nCity] = nDis;
                q.push({nDis, nCity});
            }
        }
    }

    cout << dist[b];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    costBus.resize(N + 1);
    
    int locStart, locEnd, valDistance;
    for(int i = 0; i < M; i++){
        cin >> locStart >> locEnd >> valDistance;
        costBus[locStart].push_back({locEnd, valDistance});
    }
    cin >> A >> B;
    
    solve(A, B);
}