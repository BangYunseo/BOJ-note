#include <iostream>

using namespace std; 

int main(){
    int N, W, H, L;
    cin >> N >> W >> H >> L;
    
    int res = (W / L) * (H / L);
    if(N < res) cout << N; 
    else cout << res;
}