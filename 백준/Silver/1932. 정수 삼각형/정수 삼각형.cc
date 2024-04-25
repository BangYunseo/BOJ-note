#include <iostream>
#include <algorithm>

using namespace std;

int dp[505][505];

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
    
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> dp[i][j];
        }
    }
    
    int maxV = dp[1][1];
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(j == 0) 
                dp[i][j] = dp[i - 1][0] + dp[i][j];
            else if(i == j) 
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
            else 
                dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);
            maxV = max(maxV, dp[i][j]);
        } 
    }
    cout << maxV << endl;
    return 0;
}