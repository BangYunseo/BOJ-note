#include <iostream>

using namespace std;

long long int word;
int main(){
    cin >> word;
    
    if(word % 3 == 0){
        cout << "S";
    } else if(word % 3 == 1) {
        cout << "U";
    } else {
        cout << "O";
    }
}