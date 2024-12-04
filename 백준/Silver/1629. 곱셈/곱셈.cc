#include <iostream>

using namespace std;

long long A, B, C, res = 1;

long long func(long long a){
    if(a == 0) return 1;
    if(a == 1) return A % C;

    long long k = func(a / 2) % C;
    if(a % 2 == 0) return k * k % C;
    else return (k * k % C) * (A % C);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> C;
    cout << func(B) % C;
}