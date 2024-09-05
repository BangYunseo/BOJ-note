#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;
    int res = min(A2 * 2 + A3 * 4, min(A1 * 2 + A3 * 2, A1 * 4 + A2 * 2));
    cout << res;
}