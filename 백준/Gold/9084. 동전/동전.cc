#include <iostream>
#include <cstring>

using namespace std;

int T, N;
int coin[21], money[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        memset(coin, 0, sizeof(coin));
        memset(money, 0, sizeof(money));
        
        for(int j = 0; j < N; j++) cin >> coin[j];
        
        int goal;
        cin >> goal;
        
        money[0] = 1;
        for(int k = 0; k < N; k++){
            for(int l = coin[k]; l <= goal; l++){
                money[l] += money[l - coin[k]];
            }
        }
        cout << money[goal] << '\n';
    }
}