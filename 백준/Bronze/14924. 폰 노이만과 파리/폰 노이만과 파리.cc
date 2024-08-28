#include <iostream>

using namespace std;

int main(){
    int S, T, D;
    cin >> S >> T >> D;
    
    int temp = D / (S * 2);
    int res = temp * T;
    cout << res;
}