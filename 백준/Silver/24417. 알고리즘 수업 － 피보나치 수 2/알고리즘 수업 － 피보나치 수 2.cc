#include <iostream>

#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, a, count1 = 1, count2 = 1;
    cin >> n;

    for(int i = 3; i <= n; i++){
        a = count2;
        count2 = (count1 + count2) % MOD;
        count1 = a;
    }
    cout << count2 << ' ' << (n - 2);
}