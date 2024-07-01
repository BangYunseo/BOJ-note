#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int n, m, res;
    cin >> n >> m;
    
    long long int arr[100001] = {0, };
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    long long int max = 0;
    for(int i = 0; i < m; i++){
        max += arr[i];
    }
    for(int i = m; i < n; i++){
        res = 0;
        for(int j = 0; j < m; j++){
            res += arr[i - j];
        }
        if(res > max) max = res;
    }
    cout << max;
}