#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    int arr[15][15] = {0, };
    
    for(int i = 0; i <= 14; i++){
        for(int j = 1; j <= 14; j++){
            if(i == 0) arr[0][j] = j;
            else{
                for(int k = 1; k <= j; k++) arr[i][j] += arr[i - 1][k];
            }
        }
    }
    for(int i = 0; i < T; i++){
        int k, n;
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }
}