#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1001][3];
int dp[1001][3];
int ans = 987654321;

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    
    for(int j = 0; j <= 2; j++){
        for(int k = 0; k <= 2; k++){
            if(k == j) 
                dp[1][k] = arr[1][k];
            else 
                dp[1][k] = 987654321;
        }
        
        for(int i = 2; i <= N; i++){
            dp[i][0] = arr[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = arr[i][1] + min(dp[i - 1][2], dp[i - 1][0]);
            dp[i][2] = arr[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
        }
        
        for(int i = 0; i <= 2; i++){
            if(i == j) continue;
            else ans = min(ans, dp[N][i]);
        }
    } cout << ans;
}