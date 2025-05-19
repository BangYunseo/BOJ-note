#include <iostream>
#include <cstring>

using namespace std;

int R, C;
char arr[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void Defence(int a, int b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(arr[i][j] == 'W'){
                for(int r = 0; r < 4; r++){
                    int ni = i + dx[r];
                    int nj = j + dy[r];

                    if(ni < 0 || nj < 0 || ni >= a || nj >= b) 
                        continue;

                    if(arr[ni][nj] == 'S'){
                        cout << 0 << endl;
                        return ;
                    }

                    if(arr[ni][nj] == '.'){
                        arr[ni][nj] = 'D';
                    }
                }
            }
        }
    }

    cout << 1 << endl;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++)
            cout << arr[i][j];
        cout << '\n';
    }
}

int main(){
    cin >> R >> C;
    
    string loc;
    for(int i = 0; i < R; i++){
        cin >> loc;
        for(int j = 0; j < C; j++){
            arr[i][j] = loc[j];
        }
    }

    Defence(R, C);
}