#include <iostream>
#include <algorithm>

using namespace std; 

int A;
int arr[1001];
int dp[1001];
int main(){
    cin >> A;
    
    for(int i = 1; i <= A; i++) 
        cin >> arr[i];
    
    for(int i = 1; i <= A; i++){
        dp[i] = arr[i];
        for(int j = 1; j < i; j++){
            if(arr[j] < arr[i] && dp[i] < dp[j] + arr[i]){
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }
    
    sort(dp, dp + A + 1);
    cout << dp[A];
    return 0;
}