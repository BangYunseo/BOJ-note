#include <iostream>

using namespace std;

int dp[1005] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    dp[1] = dp[3] = dp[4] = dp[5] = 1;
    dp[2] = 0;
    
    for(int i = 6; i <= N; i++){
        if(dp[i - 1] == 0 || dp[i - 3] == 0 || dp[i - 4] == 0) dp[i] = 1;
        else dp[i] = 0;
    }
    
    if(dp[N] == 1) cout << "SK";
    else cout << "CY";
}