#include <iostream>

using namespace std;

int T1, T2, T3, T4;
int main(){
    cin >> T1 >> T2 >> T3 >> T4;
    int res = (T1 * 56) + (T2 * 24) + (T3 * 14) + (T4 * 6);
    cout << res;
}