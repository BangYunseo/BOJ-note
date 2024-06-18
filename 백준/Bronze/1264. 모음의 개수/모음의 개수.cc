#include <iostream>
#include <string>

using namespace std;

int main(){
    string word = "";
    while(true){
        getline(cin, word);
        if(word == "#")
            break;
        
        int count = 0;
        for(int i = 0; i < word.length(); i++){
            if((word[i] == 'a') || (word[i] == 'e') || 
               (word[i] == 'o') || (word[i] == 'i') || 
               (word[i] == 'u') || (word[i] == 'I') || 
               (word[i] == 'A') || (word[i] == 'E') || 
               (word[i] == 'O') || (word[i] == 'U'))
                count++;
        }
        cout << count << endl;
    }
}