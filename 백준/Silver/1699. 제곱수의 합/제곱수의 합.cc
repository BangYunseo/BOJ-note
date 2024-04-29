#include <iostream>
#include <algorithm>

using namespace std;

int N;
int dp[100001];
int main(){
    cin >> N;
    
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    
    for(int i = 4; i <= N; i++){
        dp[i] = i;
        for(int j = 1; j * j <= i; j++) dp[i] = min(dp[i], dp[i - j * j] + 1);
    }cout << dp[N];
}