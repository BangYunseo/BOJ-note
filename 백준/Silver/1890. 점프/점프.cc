#include <iostream>

using namespace std;

int N, map[101][101];
long long dp[101][101];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cin >> map[i][j];
        }
    }
    dp[1][1] = 1;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(dp[i][j] == 0 || (i == N && j == N))
            {
                continue;
            }
            
            int value = map[i][j];
            int down = value + i;
            int right = value + j;
            
            if(down <= N)
            {
                dp[down][j] = dp[down][j] + dp[i][j];
            }
            
            if(right <= N)
            {
                dp[i][right] = dp[i][right] + dp[i][j];
            }
        }
    }
    
    cout << dp[N][N];
}