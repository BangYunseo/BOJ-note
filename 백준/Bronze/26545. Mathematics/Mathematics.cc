#include <iostream>

using namespace std;

int main(){
    int T, temp, res = 0;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> temp;
        res +=  temp;
    }
    cout << res;
}