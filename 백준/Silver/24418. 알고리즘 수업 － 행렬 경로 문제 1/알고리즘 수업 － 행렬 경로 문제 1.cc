#include <iostream>

using namespace std;

int arr[31][31];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    for(int i = 0; i < 31; i++) arr[i][0] = arr[i][i] = 1;

    for(int i = 2; i < 31; i++){
        for(int j = 1; j < i; j++) arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
    }

    cout << 2 * arr[2 * N - 1][N] << ' ' << (N * N);
}