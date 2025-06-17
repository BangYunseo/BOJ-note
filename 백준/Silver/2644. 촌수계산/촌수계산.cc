#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, src, des, x, y;
vector<vector<int>> graph;
int dist[101];

void bfs(int a){
    queue<int> q;
    
    q.push(a);
    dist[a] = 0;
    
    while(!q.empty()){
        int curV = q.front();
        q.pop();

        for(int i = 0; i < graph[curV].size(); i++){
            int next = graph[curV][i];

            if(dist[next] == -1){
                dist[next] = dist[curV] + 1;
                q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> src >> des >> m;
    
    graph.resize(n + 1);

    for(int i = 0; i <= n; i++){
        dist[i] = -1;
    }
    
    while(m--){
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bfs(src);
    cout << dist[des];
}