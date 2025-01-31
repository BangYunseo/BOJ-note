#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int d[1001];
    int cnt1[1001];
    int cnt2[1001];
    int cnt3[1001];
    int ans = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> d[i];
    
    for(int i = 0; i < N; i++){
        cnt1[i] = 1;
        for(int j = 0; j < i; j++){
            if(d[i] > d[j]){
                cnt1[i] = max(cnt1[i], cnt1[j] + 1);
            }
        }
    }
    
    for(int i = N - 1; i >= 0; i--){
        cnt2[i] = 1;
        for(int j = N - 1; j > i; j--){
            if(d[i] > d[j]){
                cnt2[i] = max(cnt2[i], cnt2[j] + 1);
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        cnt3[i] = cnt1[i] + cnt2[i];
        ans = max(ans, cnt3[i]);
    }
    
    cout << ans - 1;
}