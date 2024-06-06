#include <iostream>

using namespace std;

string word;
int main(){
    int count = 0;
    while(true){
        word = "";
        getline(cin, word);
        if(word == ""){
            break;
        }
        count++;
    }
    cout << count;
}