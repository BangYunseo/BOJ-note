#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    int M, N, x, y;
    while(T--){
        cin >> M >> N >> x >> y;

        int limit = lcm(M, N);
        bool check = false;

        for(int i = x; i <= limit; i += M){
            if((i - 1) % N + 1 == y){
                cout << i << '\n';
                check = true;
                break;
            }
        }

        if(!check) cout << -1 << '\n';
    }
}