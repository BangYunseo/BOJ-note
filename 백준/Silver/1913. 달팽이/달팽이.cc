#include <iostream>

using namespace std;

int map[1001][1001], N, N2, index_x, index_y, dir, a, b;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> N2;

    for(int i = N * N; i > 0; i--){
        map[b][a] = i;
        if(i == N2){
            index_x = a + 1;
            index_y = b + 1;
        }
        if(b + dy[dir] < 0 || b + dy[dir] >= N 
           || a + dx[dir] < 0 || a + dx[dir] >= N 
           || map[b + dy[dir]][a + dx[dir]] != 0){
            dir = (dir + 1) % 4;
        }
        b = b + dy[dir];
        a = a + dx[dir];
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
    cout << index_y << " " << index_x;
}