#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<vector<int>> adj;
bool visited[2001];
bool checking = false;

void dfs(int n, int depth){
    if(checking)
    {
        return;
    }
    
    visited[n] = true;
    
    if(depth == 5)
    {
        checking = true;
        return;
    }
    
    for(int i = 0; i < adj[n].size(); i++)
    {
        int nextNode = adj[n][i];
        if(!visited[nextNode])
        {
            dfs(nextNode, depth + 1);
            
            if(checking)
            {
                return;
            }
        }
    }
    
    visited[n] = false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    adj.resize(N + 1);

    int a, b;
    for(int i = 0; i < M; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i = 0; i < N; i++)
    {
        if(checking)
        {
            break;
        }
        fill(visited, visited + N, false);
        dfs(i, 1);
    }
    
    if(checking) cout << 1;
    else cout << 0;
}