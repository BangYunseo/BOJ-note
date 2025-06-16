#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word1, word2;
    cin >> word1 >> word2;

    // 입력 문자 길이
    int n = word1.length();
    int m = word2.length();

    // vector 배열 사용
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(word1[i - 1] == word2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int countLength = dp[n][m];
    cout << countLength << '\n';

    string resWord = "";
    int i = n, j = m;
    while(i > 0 && j > 0){
        if(word1[i - 1] == word2[j - 1]){
            resWord += word1[i - 1];
            i--;
            j--;
        } else if(dp[i - 1][j] > dp[i][j - 1]){
            i--;
        } else{
            j--;
        }
    }
    
    reverse(resWord.begin(), resWord.end());
    cout << resWord;
}