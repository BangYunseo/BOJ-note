#include <iostream>
#include <string>

using namespace std;

int main(){
    string arr[3];
    int res = 0;
    for(int i = 0; i < 3; i++) cin >> arr[i];
    for(int i = 0; i < 3; i++){
        if(arr[i][0] == 'F' || arr[i][0] == 'B') continue;
        res = stoi(arr[i]) + (3 - i);
    }
    if(res % 3 == 0 && res % 5 == 0) cout << "FizzBuzz";
    else if(res % 3 == 0 && res % 5 != 0) cout << "Fizz";
    else if(res % 3 != 0 && res % 5 == 0) cout << "Buzz";
    else cout << res;
}