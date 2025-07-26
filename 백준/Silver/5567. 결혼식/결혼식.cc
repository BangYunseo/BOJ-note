#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int cnt = 0;
bool visited[501];
vector<int> friendList[501];

void bfs(int num, int dep){
    queue<pair<int, int>> q;
    q.push(make_pair(num, dep));
    visited[1] = true;
    
    while(!q.empty())
    {
        int curV = q.front().first;
        int curD = q.front().second;
        q.pop();
        
        if(curD == 2)
        {
            continue;
        }
        
        for(int i = 0; i < friendList[curV].size(); i++)
        {
            int nextV = friendList[curV][i];
            if(visited[nextV])
            {
                continue;
            }
            
            visited[nextV] = true;
            cnt++;
            q.push(make_pair(nextV, curD + 1));
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    
    int a, b;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        friendList[a].push_back(b);
        friendList[b].push_back(a);
    }
    
    bfs(1, 0);
    
    cout << cnt;
}