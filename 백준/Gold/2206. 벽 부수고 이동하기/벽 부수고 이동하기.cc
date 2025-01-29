#include <iostream>
#include <queue>

using namespace std;

int N, M;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int visit[1001][1001][2];
// 최단거리

int arr[1001][1001];

int bfs(){
    queue <pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 0});
    visit[1][1][0] = 1;
    
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int wall = q.front().second;
        q.pop();
        
        if(x == N && y == M)
            return visit[x][y][wall];
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 1 && nx <= N && ny >= 1 && ny <= M){
                // 벽이 없고 방문하지 않은 경우
                if(arr[nx][ny] == 0 && visit[nx][ny][wall] == 0){
                    visit[nx][ny][wall] = visit[x][y][wall] + 1;
                    q.push({{nx, ny}, wall});
                }
                
                // 벽이 있고 아직 벽을 뚫지 않은 경우
                if(arr[nx][ny] == 1 && wall == 0){
                    visit[nx][ny][wall + 1] = visit[x][y][wall] + 1;
                    q.push({{nx, ny}, wall + 1});
                }
            }
        }
    }
    return -1;
}

int main(){
    scanf("%d %d", &N, &M);
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    
    cout << bfs() << endl;
}