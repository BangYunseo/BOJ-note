#include <iostream>

using namespace std;

int N, K;

int main(){
    cin >> N >> K;
    int arr[201][201];
    for(int i = 0; i <= K; i++) arr[1][i] = i;
    
    for(int a = 2; a <= N; a++){
        for(int b = 1; b <= K; b++) {
            arr[a][b] = (arr[a - 1][b] + arr[a][b - 1]) % 1000000000;
        }
    } 
    cout << arr[N][K];
}