#include <iostream>

#define MAX 1001
#define MOD 10007
using namespace std;

int N, dp[MAX][10];
int main(){
    cin >> N;
    
    for(int i = 0; i < 10; i++){
        dp[1][i] = 1;
    }
    
    for(int i = 2; i <= N; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k <= j; k++){
                dp[i][j] = dp[i][j] + dp[i - 1][k];
                dp[i][j] = dp[i][j] % MOD;
            }
        }
    }
    
    int res = 0;
    for(int i = 0; i < 10; i++){
        res += dp[N][i];
    }
    res %= MOD;
    
    cout << res;
}