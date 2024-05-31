#include <iostream>

using namespace std;

string word;
int main(){
    cin >> word;
    int length = word.length();
    while(length--){
        cout << word[length];
    }
}