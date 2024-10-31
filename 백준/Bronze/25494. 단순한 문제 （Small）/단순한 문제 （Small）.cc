#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T, a, b, c;
    cin >> T;
    
    while(T--){
        cin >> a >> b >> c;
        int res = min(a, b);
        cout << min(res, c) << endl;
    }
}