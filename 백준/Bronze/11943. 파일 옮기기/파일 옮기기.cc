#include <iostream>

using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    int case1 = A + D, case2 = B + C;
    if(case1 > case2) cout << case2;
    else cout << case1;
}