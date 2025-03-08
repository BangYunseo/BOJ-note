#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, x, res = 0;
int arr[100001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr, arr + n);
    cin >> x;

    int startP = 0;
    int endP = n - 1;
    while(true){
        if(startP >= endP) break;
        
        if(arr[startP] + arr[endP] == x){
            res++;
            startP++;
        }
            
        else if(arr[startP] + arr[endP] > x) 
            endP--;
            
        else if(arr[startP] + arr[endP] < x) 
            startP++;
    }

    cout << res;
}