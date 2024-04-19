#include <iostream>
#include <string>

using namespace std;

int alpha[26], count = 0;
string word;

int main(){
    cin >> word;
    
    for(int i = 0; i < word.length(); i++){
        if(word[i] < 97) alpha[word[i] - 65]++;
        else alpha[word[i] - 97]++;
    }
    
    int max = 0, max_index = 0;
    
    for(int i = 0; i < 26; i++){
        if(max < alpha[i]){
            max = alpha[i];
            max_index = i;
        }
    }
    
    for(int i = 0; i < 26; i++){
        if(max == alpha[i]) count++;
    }
    
    if(count > 1) cout << '?';
    else cout << (char)(max_index+65);
}