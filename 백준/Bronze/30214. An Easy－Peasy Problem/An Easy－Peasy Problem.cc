#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    if (B % 2 != 0) B += 1;
    if(A >= B / 2) cout << "E";
    else cout << "H";
}