#include <iostream>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    string res_word = "";
    res_word += word[0];
    for(int i = 1; i < word.length(); i++){
        if(word[i] != word[i - 1]) res_word += word[i];
    }
    cout << res_word;
}