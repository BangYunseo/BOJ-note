#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int arr[501][501] = {0};
int visit[501][501] = {0};
int N, M, max_res = 0;

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

void search(int x, int y, int count, int score){
    if(count == 4){
        if(max_res < score) 
            max_res = max(max_res, score);
        return ;
    }
    
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx < 1 || nx > N || ny < 1 || ny > M || visit[nx][ny]) 
            continue;
        
        visit[nx][ny] = 1;
        search(nx, ny, count + 1, score + arr[nx][ny]);
        visit[nx][ny] = 0;
    }
    
    if(x - 1 >= 1 && y - 1 >= 1 && x + 1 <= N){
        max_res = max(max_res, (arr[x - 1][y] + arr[x][y - 1] + arr[x][y] + arr[x + 1][y]));
    }
    
    // ㅏ
    if(x - 1 >= 1 && y + 1 <= M && x + 1 <= N){
        max_res = max(max_res, (arr[x - 1][y] + arr[x][y + 1] + arr[x][y] + arr[x + 1][y]));
    }
    
    // ㅗ
    if(y - 1 >= 1 && x + 1 <= N && y + 1 <= M){
        max_res = max(max_res, (arr[x][y] + arr[x + 1][y] + arr[x + 1][y - 1] + arr[x + 1][y + 1]));
    }
    
    // ㅜ
    if(y - 1 >= 1 &&  x + 1 <= N && y + 1 <= M){
        max_res = max(max_res, (arr[x][y - 1] + arr[x][y] + arr[x][y + 1] + arr[x + 1][y]));
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    memset(visit, 0, sizeof(visit));
    
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            visit[i][j] = 1;
            search(i, j, 1, arr[i][j]);
            visit[i][j] = 0;
        }
    }
    cout << max_res;
}