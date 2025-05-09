#include <iostream>
#define ll long long int

using namespace std;

ll values_5[12] = {5, 25, 125, 625, 3125, 15625, 78125, 390625, 
                 1953125, 9765625, 48828125, 244140625};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    ll N;
    while(T--){
        cin >> N;
        
        ll sum = 0;
        for(int i = 0; i < 12; i++){
            if(N >= values_5[i]) sum += (N / values_5[i]);
            else break;
        }
        
        cout << sum << '\n';
    }
}