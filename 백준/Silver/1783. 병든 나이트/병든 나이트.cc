#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int main(){
    cin >> N >> M;
    
    int res;
    if(N == 1) res = 1;
    else if (N == 2) res = min(4, (M + 1) / 2);
    else if (N >= 3 && M < 7) res = min(4, M);
    else res = M - 2;
    
    cout << res;
}