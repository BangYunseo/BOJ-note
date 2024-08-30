#include <iostream>

using namespace std;

int main(){
    string word;
    getline(cin, word);
    if((word[0] - '0') + (word[4] - '0') == (word[8] - '0')) cout << "YES";
    else cout << "NO";
}