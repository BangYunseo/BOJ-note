#include <iostream>

using namespace std;

int main(){
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    
    int max1, max2, res;
    if(A % C != 0) max1 = (A / C) + 1;
    else max1 = A / C;
    
    if(B % D != 0) max2 = (B / D) + 1;
    else max2 = B / D;
    
    if(max1 > max2) cout << (L - max1);
    else cout << (L - max2);
}