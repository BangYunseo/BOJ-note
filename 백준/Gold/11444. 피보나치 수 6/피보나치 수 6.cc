#include <iostream>
#include <map>
#include <utility>

#define MOD 1000000007
#define ll long long

using namespace std;

ll n;
map<ll, ll> arr;

ll fibo(ll a){
    if(a == 0) return arr[0];

    if(arr[a]) return arr[a];

    if(a % 2 == 0){
        arr[a] = ((fibo(a / 2) % MOD) * ((fibo(a / 2 + 1) % MOD) + (fibo(a / 2 - 1) % MOD) % MOD)) % MOD;
    } else {
        arr[a] = ((((fibo((a + 1) / 2) % MOD) * (fibo((a + 1) / 2) % MOD)) % MOD) + (((fibo((a - 1) / 2) % MOD) * (fibo((a - 1) / 2) % MOD)) % MOD)) % MOD;
    }

    return arr[a];
}
int main() {
    cin >> n;

    arr[0] = 0;
    arr[1] = arr[2] = 1;

    cout << fibo(n);
}