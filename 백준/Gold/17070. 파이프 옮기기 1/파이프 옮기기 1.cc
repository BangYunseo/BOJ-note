#include <iostream>

using namespace std;

int N;
int arr[17][17][3];
bool check[17][17];

void dfs(){
    arr[1][2][0] = 1;
    for(int i = 3; i <= N; i++){
        if(!check[1][i]){
            arr[1][i][0] = arr[1][i - 1][0];
        }
    }
    
    for(int i = 2; i <= N; i++){ // 2행 
        for(int j = 3; j <= N; j++){ // 3열부터
            if(!check[i][j]){
                arr[i][j][0] = arr[i][j - 1][0] + arr[i][j - 1][1];
                arr[i][j][2] = arr[i - 1][j][1] + arr[i - 1][j][2];
                if(!check[i - 1][j] && !check[i][j - 1]){
                    arr[i][j][1] = arr[i - 1][j - 1][0] + 
                                   arr[i - 1][j - 1][1] + 
                                   arr[i - 1][j - 1][2];
                }
            }
        }
    }
}

int main(){
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> check[i][j];
        }
    }
    
    dfs();
    cout << arr[N][N][0] + arr[N][N][1] + arr[N][N][2];
}