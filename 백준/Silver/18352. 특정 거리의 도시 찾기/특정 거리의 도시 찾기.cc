#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, K, X;
vector<vector<int>> city;
int d[1000001];

void bfs(int a){
    d[a] = 0;
    
    queue<int> q;
    q.push(a);
    
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        for(int i = 0; i < city[cur].size(); i++)
        {
            int next = city[cur][i];
            if(d[next] > d[cur] + 1)
            {
                d[next] = d[cur] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M >> K >> X;
    
    city.resize(N + 1);
    for(int i = 1; i <= N; i++)
    {
        d[i] = 987654321;
    }
    
    int A, B;
    for(int i = 0; i < M; i++)
    {
        cin >> A >> B;
        city[A].push_back(B);
    }
    
    bfs(X);
    bool checking = false;
    for(int i = 1; i <= N; i++)
    {
        if(d[i] == K)
        {
            checking = true;
            cout << i << '\n';
        }
    }
    if(!checking)
    {
        cout << -1;
    }
}