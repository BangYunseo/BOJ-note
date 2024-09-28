#include <iostream>

using namespace std;

int main(){
    long long q1, q2, p1, p2;
    cin >> p1 >> q1 >> p2 >> q2;

    long long top = p1 * p2;
    long long bottom = q1 * q2 * 2;
    if(top % bottom == 0) cout << 1;
    else cout << 0;
}