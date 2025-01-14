#include <iostream>

using namespace std;

int N, K;
int W[101];
int V[101];
int dp[101][100001];
int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++) cin >> W[i] >> V[i];
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= K; j++){
            if(j >= W[i]){
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
                // i 번째 물건을 넣을 수 있는 경우
                // 이전 물건의 가치 or 이번 물건을 넣을 때의 가치 중 큰 가치 선택
            } else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[N][K] << endl;
}