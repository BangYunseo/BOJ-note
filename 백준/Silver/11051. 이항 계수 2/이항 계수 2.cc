#include <iostream>

using namespace std;

int dp[1001][1001];

int main(){
    int N, K;
    cin >> N >> K;
    
    for(int i = 0; i <= N; i++)
        dp[i][0] = 1;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= K; j++){
            if(j <= i){
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
            }
        }
    }
    
    cout << dp[N][K];
}