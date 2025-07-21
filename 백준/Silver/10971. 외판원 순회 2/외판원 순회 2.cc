#include <iostream>
#include <algorithm>

using namespace std;

int N, startNode, weight[11][11], res = 987654321;
bool visited[11];

void dfs(int node, int cost, int cnt){
    if(cnt == N - 1)
    {
        if(weight[node][startNode])
        {
            res = min(res, cost + weight[node][startNode]);
            return;
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        if(weight[node][i] && visited[i] == false)
        {
            visited[i] = true;
            dfs(i, cost + weight[node][i], cnt + 1);
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cin >> weight[i][j];
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        startNode = i;
        visited[i] = true;
        dfs(i, 0, 0);
        visited[i] = false;
    }
    // 백트래킹 구조
    
    cout << res;
}