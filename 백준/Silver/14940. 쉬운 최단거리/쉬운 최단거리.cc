#include <iostream>
#include <queue>

using namespace std;

int n, m;

int arr[1001][1001];
int score[1001][1001];
bool visited[1001][1001];

int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, -1, 1};

void bfs(int a, int b){
    queue<pair<int, int>> q;
    
    q.push({a, b});
    visited[a][b] = true;
    score[a][b] = 0;
    
    while(!q.empty()){
        int frontx = q.front().first;
        int fronty = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int temp_x = frontx + dx[i];
            int temp_y = fronty + dy[i];
            
            if(temp_x >= 0 && temp_x < n && temp_y >= 0 && temp_y < m){
                if(visited[temp_x][temp_y] == false && arr[temp_x][temp_y] != 0){
                    visited[temp_x][temp_y] = true;
                    score[temp_x][temp_y] = score[frontx][fronty] + 1;
                    q.push({temp_x, temp_y});
                }
            }
        }
        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    
    int start = -1, end = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            score[i][j] = -1;
            visited[i][j] = false;
            if(arr[i][j] == 2){
                start = i;
                end = j;
                score[i][j] = 0;
            }
        }
    }
    
    bfs(start, end);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0) cout << 0 << ' ';
            else cout << score[i][j] << ' ';
        }
        cout << '\n';
    }
}