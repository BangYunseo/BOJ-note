#include <iostream>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    int count = word.length();
    for(int i = 0; i < word.length(); i += 3){
        if(word[i] == 'P' || word[i] == 'p') count--;
        if(word[i + 1] == 'e' || word[i + 1] == 'E') count--;
        if(word[i + 2] == 'r' || word[i + 2] == 'R') count--;
    }
    cout << count;
}