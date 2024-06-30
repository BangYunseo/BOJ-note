#include <iostream>

using namespace std;

int main(){
    int arr[101][101];
    bool visited[10001] = {false, };
    
    int N, temp, count = 0;
    cin >> N;
    double res = N * ((N * N) + 1) / 2;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
            if(visited[arr[i][j]] == true) count++;
            else visited[arr[i][j]] = true;
        }
    }
    for(int i = 0; i < N; i++){
        temp = 0;
        for(int j = 0; j < N; j++) temp += arr[i][j];
        if(temp != res) count++;
    }
    
    for(int j = 0; j < N; j++){
        temp = 0;
        for(int i = 0; i < N; i++) temp += arr[i][j];
        if(temp != res) count++;
    }
    
    temp = 0;
    for(int i = 0; i < N; i++) 
        temp += arr[i][i];
    if(temp != res) count++;
    
    temp = 0;
    for(int i = 0; i < N; i++) 
        temp += arr[i][N - i - 1];
    if(temp != res) count++;
    
    if(count > 0) cout << "FALSE";
    else cout << "TRUE";
}