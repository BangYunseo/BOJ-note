#include <iostream>
#include <algorithm>

using namespace std;

int N, minarr[2][3], maxarr[2][3];

int main(){
    cin >> N;
    
    int a, b, c, k = 0;
    
    while(N--){
        cin >> a >> b >> c;
        
        maxarr[k][0] = max(maxarr[1 - k][0], maxarr[1 - k][1]) + a;
        maxarr[k][1] = max(max(maxarr[1 - k][0], maxarr[1 - k][1]), maxarr[1 - k][2]) + b;
        maxarr[k][2] = max(maxarr[1 - k][1], maxarr[1 - k][2]) + c;
        
        minarr[k][0] = min(minarr[1 - k][0], minarr[1 - k][1]) + a;
        minarr[k][1] = min(min(minarr[1 - k][0], minarr[1 - k][1]), minarr[1 - k][2]) + b;
        minarr[k][2] = min(minarr[1 - k][1], minarr[1 - k][2]) + c;
        
        k = 1 - k;
    }
    
    int ans_max = max(max(maxarr[1 - k][0], maxarr[1 - k][1]), maxarr[1 - k][2]);
    int ans_min = min(min(minarr[1 - k][0], minarr[1 - k][1]), minarr[1 - k][2]);

    cout << ans_max << ' ' << ans_min;
}