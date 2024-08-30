#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long double A, B, C;
    cin >> A >> B >> C;
    
    if((A * B / C) > (A / B * C)) cout << int(A * B / C);
    else cout << int(A / B * C);
}