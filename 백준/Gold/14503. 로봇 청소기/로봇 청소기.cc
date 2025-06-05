#include <iostream>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int N, M, arr[51][51];
int cnt = 0;

void cleaning(int r, int c, int d){
    if(arr[r][c] == 0) {
        arr[r][c] = 2;
        cnt++;
    }

    bool checking = false;
    for(int i = 0; i < 4; i++){
        int nr = r + dx[i];
        int nc = c + dy[i];

        if(nr >= 0 && nc >= 0 && nr < N && nc < M){
            if(arr[nr][nc] == 0){
                checking = true;
                break;
            }
        }
    }
    
    if(checking) {
        // 빈 칸이 있음
        for(int i = 0; i < 4; i++){
            d = (d - 1 + 4) % 4;
            int nr = r + dx[d];
            int nc = c + dy[d];

            if(nr >= 0 && nc >= 0 && nr < N && nc < M && arr[nr][nc] == 0){
                cleaning(nr, nc, d);
                return ;
            }
        }
    } 
    int backR = r - dx[d];
    int backC = c - dy[d];

    if(backR >= 0 && backC >= 0 && backR < N && backC < M && arr[backR][backC] != 1){
        cleaning(backR, backC, d);
    } else {
        return;
    }
}

int main() {
    cin >> N >> M;

    int r, c, d;
    cin >> r >> c >> d;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }

    cleaning(r, c, d);
    cout << cnt;
}