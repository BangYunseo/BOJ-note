#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m, countV = 0, maxV = 0;
int arr[501][501];
bool visited[501][501];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    int curSize = 1;
    visited[x][y] = true;
    while(!q.empty()){
        int nx = q.front().first;
        int ny = q.front().second;
        
        q.pop();
        for(int i = 0; i < 4; i++){
            int cx = nx + dx[i];
            int cy = ny + dy[i];

            if(cx < 0 || cy < 0 || cx >= n || cy >= m)
                continue;
            
            if(visited[cx][cy] || arr[cx][cy] == 0)
                continue;
            
            visited[cx][cy] = true;
            q.push({cx, cy});
            curSize++;
        }
    }
    maxV = max(maxV, curSize);    
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(visited[i][j] || arr[i][j] == 0)
                continue;
            
            bfs(i, j);
            countV++;
        }
    }
    
    cout << countV << '\n' << maxV;
}