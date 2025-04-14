#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int N, sharkMx = 0, sharkMy = 0, dis = 0;
int map[21][21];

int searching(int a, int b, int size){
    bool visited[21][21] = {false};
    
    // (x, y, distance)
    queue<tuple<int, int, int>> q;
    q.push({a, b, 0});
    visited[a][b] = true;
    
    int minDist = 1e9;
    int targetX = -1, targetY = -1;

    while(!q.empty()){
        // 타입 추론 auto 사용
        auto [x, y, d] = q.front(); q.pop();

        // 먹을 수 있는 물고기인 경우
        if(map[x][y] >= 1 && map[x][y] <= 6 && map[x][y] < size){
            if(d < minDist || 
                (d == minDist && (x < targetX || 
                (x == targetX && y < targetY)))){
                minDist = d;
                targetX = x;
                targetY = y;
            }
        }

        for(int i = 0; i < 4; i++){
            int mx = x + dx[i];
            int my = y + dy[i];

            if(mx >= 1 && mx <= N && my >= 1 && my <= N && !visited[mx][my]){
                if(map[mx][my] <= size) {
                    visited[mx][my] = true;
                    q.push({mx, my, d + 1});
                }
            }
        }
    }
    if(minDist == 1e9) return -1;

    map[sharkMx][sharkMy] = 0;
    sharkMx = targetX;
    sharkMy = targetY;
    map[sharkMx][sharkMy]  = 9;

    return minDist;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> map[i][j];
            if(map[i][j] == 9) {
                sharkMx = i;
                sharkMy = j;
            }
        }
    }

    int sharkSize = 2, eatCount = 0;

    while(true){
        int res = searching(sharkMx, sharkMy, sharkSize);

        // 더 이상 먹을 수 있는 물고기가 없으면 종료
        if(res == -1) break;

        dis += res;
        eatCount++;
        if(eatCount == sharkSize) {
            sharkSize++;
            eatCount = 0;
        }
    }
    cout << dis;
}