#include <iostream>

using namespace std;

int T, n;
int dp[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> T;
    dp[0] = dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= 1000000; i++)
    {
        dp[i] = ((long long)dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009;
    }
    
    while(T--)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }
}