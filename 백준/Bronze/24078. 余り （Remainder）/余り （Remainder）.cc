#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    while(true){
        if(num < 21) break;
        num %= 21;
    }
    cout << num;
}