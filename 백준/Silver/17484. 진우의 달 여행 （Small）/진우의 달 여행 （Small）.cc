#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int INF = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> space(N + 1, vector<int>(M + 1));
    // 그리드 2차원 벡터 : space[N + 1][M + 1];
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> space[i][j];
        }
    }
    
    // dp[i][j][k] : (i, j) 배열에서의 k 패턴
    // k == 0 : 왼쪽 이동
    // k == 1 : 가운데 이동
    // k == 2 : 오른쪽 이동
    
    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(M + 1, vector<int>(3, INF)));
    // 그리드 3차원 벡터(패턴 저장) : space[N + 1][M + 1][3]; 
    
   for(int j = 1; j <= M; j++){
        // 첫 행은 어떤 방향이더라도 도달
        dp[1][j][0] = space[1][j];
        dp[1][j][1] = space[1][j];
        dp[1][j][2] = space[1][j];
    }
    
    for(int i = 2; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(j + 1 <= M) 
                dp[i][j][0] = space[i][j] + min(dp[i - 1][j + 1][1], dp[i - 1][j + 1][2]);
            dp[i][j][1] = space[i][j] + min(dp[i - 1][j][0], dp[i - 1][j][2]);
            if(j >= 2)
                dp[i][j][2] = space[i][j] + min(dp[i - 1][j - 1][0], dp[i - 1][j - 1][1]);
        }
    }

    int minV = INF;
    for(int i = 1; i <= M; i++){
        for(int k = 0; k < 3; k++){
            minV = min(minV, dp[N][i][k]);
        }
    }
    cout << minV;
}