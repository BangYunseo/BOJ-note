#include <iostream>

using namespace std;

int main(){
    int count = 0;
    int temp;
    for(int i = 0; i < 3; i++){
        cin >> temp;
        if(temp == 1) count++;
    }
    if(count >= 2) cout << 1;
    else cout << 2;
}