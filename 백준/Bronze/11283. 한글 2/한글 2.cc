#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;

    int res = (((word[0] & 255) - 234) * 4096 + 
        ((word[1] & 255) - 176) * 64 + 
        (word[2] & 255) - 127);
    cout << res;
}