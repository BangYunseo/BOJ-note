#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int main(){
    int A;
    cin >> A;
    
    for(int i = 1; i <= A; i++){
        cin >> arr[i];
    }
    
    int dp[1001];
    
    for(int i = 1; i <= A; i++){
        dp[i] = 1;
    }
    
    for(int i = 1; i <= A; i++){
        for(int j = 1; j < i; j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    sort(dp, dp + A + 1);
    cout << dp[A];
}