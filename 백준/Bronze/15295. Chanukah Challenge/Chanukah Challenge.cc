#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int P, N, K;
    cin >> P;
    
    for(int i = 0; i < P; i++){
        cin >> N >> K;
        int res = 0;
        for(int j = 2; j <= K + 1; j++) res += j;
        cout << N << ' ' << res << '\n';
    }
}