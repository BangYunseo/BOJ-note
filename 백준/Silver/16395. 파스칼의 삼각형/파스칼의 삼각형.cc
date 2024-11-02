#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    int arr[31][31] = {0, };
    arr[1][1] = 1;
    arr[2][1] = 1;
    arr[2][2] = 1;
    for(int i = 3; i <= n; i++){
        for(int j = 1; j <= i; j++){
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    cout << arr[n][k];
}