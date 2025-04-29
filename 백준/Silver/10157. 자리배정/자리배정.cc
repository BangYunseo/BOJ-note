#include <iostream>

using namespace std;

int C, R, K;
int arr[1001][1001];
int dx[4] = {0, 1, 0, -1}; // 상 우 하 좌
int dy[4] = {1, 0, -1, 0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> C >> R >> K;
    if(K > C * R) cout << 0;
    else {
        int x = 1, y = 1, dir = 0;

        for(int i = 1; i <= K; i++){
            arr[y][x] = i;

            if(i == K){
                cout << x << ' ' << y;
                break;
            } 

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 1 || ny < 1 || nx > C || ny > R || arr[ny][nx] != 0){
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
            
            x = nx;
            y = ny;
        }
    }
}