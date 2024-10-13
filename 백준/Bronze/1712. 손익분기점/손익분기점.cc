#include <iostream>

using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    
    if(B > C || B - C == 0) cout << -1;
    else {
        long long temp = C - B;
        long long res = A / temp;
        res++;
        cout << res;
    }
}