#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N, M;
int p_count = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
string map[601];
bool visited[601][601] = {false, };

void bfs(int a, int b){
    queue<pair<int, int>> q;
    q.push({a, b});
    visited[a][b] = true;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            
            if (visited[nx][ny] || map[nx][ny] == 'X') continue;
            
            visited[nx][ny] = true;
            if(map[nx][ny] == 'P') 
                p_count++;

            q.push({nx, ny});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    string temp;
    int index_x = 0, index_y = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        map[i] = temp;
        for(int j = 0; j < M; j++){
            if(map[i][j] == 'I'){
                index_x = i;
                index_y = j;
            }
        }
    }
    
    bfs(index_x, index_y);
    
    if(p_count == 0) cout << "TT";
    else cout << p_count;
}