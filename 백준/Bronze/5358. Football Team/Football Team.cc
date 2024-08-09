#include <iostream>

using namespace std; 

int main(){
    string word;
    while(true){
        getline(cin, word);
        if(cin.eof()){
            break;
        }
        for(int i = 0; i < word.length(); i++){
            if(word[i] == 'i'){
                word[i] = 'e';
            }
            else if(word[i] == 'e'){
                word[i] = 'i';
            }
            else if(word[i] == 'E'){
                word[i] = 'I';
            }
            else if(word[i] == 'I'){
                word[i] = 'E';
            }
        }
        cout << word << endl;
    }
}