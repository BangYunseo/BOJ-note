#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int Z, W, K;
    cin >> Z;

    for(int i = 0; i < Z; i++){
        cin >> W >> K;
        int res = (W * K / 2);
        if(res < 1) cout << 0;
        else cout << res;

        cout << endl;
    }
}