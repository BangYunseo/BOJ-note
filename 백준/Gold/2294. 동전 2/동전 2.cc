#include <iostream>
#include <algorithm>
#define INF 1e9
#define MAX 10001

using namespace std;

int dp[MAX];
int coin[MAX];
int n, k;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> coin[i];
    }
    
    for(int i = 1; i <= k; i++)
    {
        dp[i] = INF;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = coin[i]; j <= k; j++)
        {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }

    if(dp[k] == INF)
    {
        cout << -1;
    }
    else
    {
        cout << dp[k];
    }
}