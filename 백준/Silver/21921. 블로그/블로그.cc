#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N, X;
    cin >> N >> X;
    
    int arr[250000];
    int max = 0;
    for(int i = 0; i < X; i++){
        cin >> arr[i];
        max += arr[i];
    }
    
    int ans = max;
    int count = 1;

    for(int i = X; i < N; i++){
        cin >> arr[i];
        max += arr[i] - arr[i - X];
        if(max >= ans){
            if(max == ans) count++;
            else{
                ans = max; 
                count = 1;
            }
        }
    }
    
    if(max == 0) cout << "SAD";
    else cout << ans << endl << count;
  
    return 0;
}