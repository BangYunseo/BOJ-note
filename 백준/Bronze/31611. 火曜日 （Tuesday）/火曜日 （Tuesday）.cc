#include <iostream>

using namespace std;

int main(){
    int X;
    cin >> X;
    X %= 7;
    if(X == 2){
        cout << "1";
    }
    else{
        cout << "0";
    }
}