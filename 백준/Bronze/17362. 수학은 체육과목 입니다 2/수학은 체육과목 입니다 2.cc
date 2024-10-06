#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 8 >= 1 && n % 8 <= 5) cout << n % 8;
    else if(n % 8 == 0) cout << 2;
    else if(n % 8 == 6) cout << 4;
    else if(n % 8 == 7) cout << 3;
}