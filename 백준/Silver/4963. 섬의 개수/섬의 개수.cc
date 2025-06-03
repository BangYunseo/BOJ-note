#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[8] = {1, 1, 1, 0, -1, -1, -1, 0};

vector<vector<int>> arr;

void bfs(int a, int b, int h, int w){
    queue<pair<int, int>> q;
    q.push({a, b});
    
    arr[a][b] = 0;
    
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for(int i = 0; i < 8; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if(nx >= 0 && ny >= 0 && nx < w && ny < h){
                if(arr[nx][ny] == 1){
                    arr[nx][ny] = 0;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main(){
    int w, h;
    while(true){
        cin >> w >> h;
        if(w == 0 && h == 0) 
            break; 

        // vector<vector<int>> 초기화
        arr.assign(h, vector<int>(w));
        
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> arr[i][j];
            }
        }
        
        int countV = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(arr[i][j] == 1){
                    bfs(i, j, w, h);
                    countV++;
                }
            }
        }
        cout << countV << endl;
    }
}