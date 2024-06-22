#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    getline(cin, word);
    
    for(int i = 0; i < word.length(); i++){
        if((word[i] >= 'a') && (word[i] <= 'z')){
            char ch = ((word[i] - 'a' + 13) % 26) + 'a';
            cout << ch;
        }
        else if((word[i] >= 'A') && (word[i] <= 'Z')){
            char ch = ((word[i] - 'A' + 13) % 26) + 'A';
            cout << ch;
        }
        else cout << word[i];
    }
}