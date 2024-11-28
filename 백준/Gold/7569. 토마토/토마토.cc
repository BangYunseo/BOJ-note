#include <iostream>
#include <queue>

using namespace std;

int M, N, H;

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

int arr[101][101][101] = {0};
queue<pair<pair<int, int>, int>> q;

void bfs(){
    
    while(!q.empty()){
        int nx = q.front().first.first;
        int ny = q.front().first.second;
        int nz = q.front().second;
        
        q.pop();
        for(int i = 0; i < 6; i++){
            int tempx = nx + dx[i];
            int tempy = ny + dy[i];
            int tempz = nz + dz[i];
            
            if(tempx >= 0 && tempx < H && 
               tempy >= 0 && tempy < M && 
               tempz >= 0 && tempz < N){
                if(arr[tempx][tempy][tempz] == 0){
                    arr[tempx][tempy][tempz] = arr[nx][ny][nz] + 1;
                    q.push({{tempx, tempy}, tempz});
                }
                    
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> H;
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < N; k++){
                cin >> arr[i][j][k];
            }
        }
    }
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < N; k++){
                if(arr[i][j][k] == 1) 
                    q.push({{i, j}, k});
            }
        }
    }
    
    int d = 0;
    bfs();
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < N; k++){
                if(arr[i][j][k] == 0){
                    cout << -1; 
                    return 0;
                } else {
                    if(arr[i][j][k] > d){
                        d = arr[i][j][k];
                    }
                }
            }
        }
    }
    cout << d - 1;
}