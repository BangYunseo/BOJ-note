#include <iostream>
#include <queue>

using namespace std;
#define Max 1001

int N, M;
int day = -1;
bool flag = false;
int tomato[Max][Max];
int visit[Max][Max];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
queue<pair<int,int>> q;

int main(){
    cin >> M >> N;

    for(int a = 0; a < N; a++){
        for(int b = 0; b < M; b++){
            cin >> tomato[a][b];
            visit[a][b] = day;
            // 배열 입력받기

            if(tomato[a][b] == 1){
                q.push({a, b});
                visit[a][b]++;
            }
            // 좌표 저장
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // 큐 q에 저장되어 있는 좌표를 옮긴 후 pop

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && N > nx && M > ny && visit[nx][ny] == -1 && tomato[nx][ny] == 0){
                q.push({nx, ny});
                visit[nx][ny] = visit[x][y] + 1;
            }
        }
        // 
    }

    for(int k = 0; k < N; k++){
        for(int z = 0; z < M; z++){
            if(day <= visit[k][z]){
                day = visit[k][z];
            }
            if(tomato[k][z] == 0 && visit[k][z] == -1){
                day = -1;
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    cout << day;
}