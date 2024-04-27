#include <iostream>

using namespace std;

int X, count = 0;
int main(){
    cin >> X;

    while(X > 0){
        if(X % 2 == 1) count++;
        X /= 2;
    }
    cout << count;
}