#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string word;
    getline(cin, word);
    
    string target = "UCPC";
    int index = 0;
    
    for(int i = 0; i < word.length(); i++){
        if(word[i] == target[index]){
            index++;
            if(index == target.length())
                break;
        }
    }

    if(index == target.length()) cout << "I love UCPC";
    else cout << "I hate UCPC";
}