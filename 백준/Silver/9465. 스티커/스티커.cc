#include <iostream>
#include <algorithm>

using namespace std;

long long arr[2][100001];
long long dp[2][100001];

int main(){
    int T, N;
    cin >> T;
    
    while(T--){
        cin >> N;
        for(int i = 0; i < 2; i++){
            for(int j = 1; j <= N; j++){
                cin >> arr[i][j];
            }
        }
        
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];
        
        for(int k = 2; k <= N; k++){
            dp[0][k] = max(dp[1][k - 2], dp[1][k - 1]) + arr[0][k];
            dp[1][k] = max(dp[0][k - 2], dp[0][k - 1]) + arr[1][k];
        }
        
        cout << max(dp[0][N], dp[1][N]) << endl;
    }
}