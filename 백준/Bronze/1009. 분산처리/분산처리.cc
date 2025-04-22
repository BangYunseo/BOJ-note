#include <iostream>

using namespace std;

int T, a, b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    int res;
    while(T--){
        cin >> a >> b;
        res = 1;
        for(int i = 0; i < b; i++){
            res = (res * a) % 10;
        }
        if(res == 0) cout << 10;
        else cout << res;
        cout << '\n'; 
    }
}
