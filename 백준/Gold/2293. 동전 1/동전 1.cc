#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> dp(k + 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    dp[0] = 1;
    for(int a = 0; a < n; a++){
        for(int b = arr[a]; b <= k; b++)
            dp[b] += dp[b - arr[a]];
    }
    cout << dp[k] << endl;
}