#include <iostream>

using namespace std;

int main(){
    int temp, res = 0;
    for(int i = 0; i < 10; i++){
        cin >> temp;
        res += temp;
    }
    if(res % 4 == 0) cout << 'N';
    else if(res % 4 == 1) cout << 'E';
    else if(res % 4 == 2) cout << 'S';
    else cout << 'W';
}