#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int count = 0;
    for(int i = 0; i < 5; i++){
        cin >> word;
        
        for(int j = 0; j < (word.length() - 2); j++){
            if(word[j] == 'F' && word[j + 1] == 'B' && word[j + 2] == 'I'){
                count++;
                cout << (i + 1) << ' ';
                break;
            }
        }
    }
    if(count == 0) cout << "HE GOT AWAY!";
}