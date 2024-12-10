#include <iostream>
#include <string>

using namespace std;
int count = 0;
string word, search_word;

int main(){
    getline(cin, word);
    getline(cin, search_word);
    int index = 0;
    int k = search_word.length();
    while(true){
        if(word.substr(index, k) == search_word){
            count++;
            index += k;
        } else index++;
        
        if(index == word.length()) break;
    }
    cout << count;
}