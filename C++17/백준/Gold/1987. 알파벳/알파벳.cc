#include <iostream>
#include <algorithm>

using namespace std;

char arr[21][21];
int alpha[26] = {0};
int R, C, cnt = 0;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void dfs(int a, int b, int num){
    cnt = max(num, cnt);

    for(int i = 0; i < 4; i++){
        int mx = a + dx[i];
        int my = b + dy[i];

        if(0 <= mx && mx < R && 0 <= my && my < C){
            if(!alpha[((int)arr[mx][my] - 65)]){
                alpha[((int)arr[mx][my] - 65)]++;
                dfs(mx, my,  num + 1);
                alpha[((int)arr[mx][my] - 65)]--;
                // 방문하지 않은 알파벳의 상태로 변경한 후 새로운 경로 탐색
            }
        }
    }
}

int main(){
    cin >> R >> C;

    string temp;
    for(int i = 0; i < R; i++){
        cin >> temp;
        for(int j = 0; j < C; j++){
            arr[i][j] = temp[j];
        }
    }

    alpha[((int)arr[0][0]) - 65]++;
    /*
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    */
    
    dfs(0, 0, 1);
    
    cout << cnt << endl;
    return 0;
}