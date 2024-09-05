#include <iostream>

using namespace std;

int main(){
    int C1, C2, B1, B2, P1, P2;
    cin >> C1 >> B1 >> P1 >> C2 >> B2 >> P2;

    int left_C = C2 - C1;
    int left_B = B2 - B1;
    int left_P = P2 - P1;
    int res = 0;
    if(left_C > 0) res += left_C;
    if(left_B > 0) res += left_B;
    if(left_P > 0) res += left_P;
    cout << res;
}