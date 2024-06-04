#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i < 2; i++){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int res = (6 * a) + (3 * b) + (2 * c) + d + (2 * e);
        cout << res << ' ';
    }
}