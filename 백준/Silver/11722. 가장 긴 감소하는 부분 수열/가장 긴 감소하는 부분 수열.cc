#include <iostream>
#include <algorithm>

using namespace std;

int N, res;
int A[1001];
int dp[1001];

int main(){
    cin >> N;
    
    for(int i = 0; i < N; i++)
        cin >> A[i];
    
    for(int i = 0; i < N; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(A[i] < A[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }
    cout << res;
}