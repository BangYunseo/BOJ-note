#include <iostream>

using namespace std;

int main(){
    long long int a, b;
    cin >> a >> b;

    if(a % 2 == 0 || b % 2 == 0){
        cout << 0;
    }
    else if(a % 2 != 0 && b % 2 != 0){
        if(a > b) cout << b;
        else cout << a;
    }
}