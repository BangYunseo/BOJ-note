#include <iostream>

using namespace std;

int main(){
    string word = "";
    string temp;
    for(int i = 0; i < 4; i++){
        cin >> temp;
        word += temp;
    }
    if((word[0] == '8' || word[0] == '9') && 
       (word[1] == word[2]) && 
       (word[3] == '8' || word[3] == '9')) cout << "ignore";
    else cout << "answer";
}