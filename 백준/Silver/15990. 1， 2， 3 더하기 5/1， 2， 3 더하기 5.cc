#include <iostream>
#define MAX 100000
#define MOD 1000000009
using namespace std;

int res[MAX + 1][4], T;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    res[1][1] = res[2][2] = res[3][1] = res[3][2] = res[3][3] = 1;
    for(int j = 4; j <= MAX; j++){
        res[j][1] = (res[j - 1][2] + res[j - 1][3]) % MOD;
        res[j][2] = (res[j - 2][1] + res[j - 2][3]) % MOD;
        res[j][3] = (res[j - 3][1] + res[j - 3][2]) % MOD;
    }
    cin >> T;
    int temp;
    for(int i = 1; i <= T; i++){
        cin >> temp;
        cout << ((long long)res[temp][1] + res[temp][2] + res[temp][3]) % MOD << '\n';
    }
}