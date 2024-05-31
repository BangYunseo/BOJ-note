#include <iostream>
#include <string>
using namespace std;

string word;
int main(){
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        word[i] = word[i] - 32;
        cout << word[i];
    }
}