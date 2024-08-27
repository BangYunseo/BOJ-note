#include <iostream>
#include <string>

using namespace std;

int main(){
    string number;
    cin >> number;
    
    int res;
    if(number.length() == 2) res = (number[0] - '0') + (number[1] - '0');
    else if(number.length() == 3){
        if(number[0] == '1' && number[1] == '0') res = 10 + (number[2] - '0');
        else if(number[1] == '1' && number[2] == '0') res = 10 + (number[0] - '0');
    }
    else res = 20;
    cout << res;
}