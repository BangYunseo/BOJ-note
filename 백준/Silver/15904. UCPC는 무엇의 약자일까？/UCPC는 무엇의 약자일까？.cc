#include <iostream>

using namespace std;

int main(){
    string word = "UCPC";
    
    string temp, res = "";
    getline(cin, temp);
    
    int index = 0;
    for(int i = 0; i < temp.length(); i++){
        if(word[index] == temp[i]){
            res += word[index];
            index++;
        }
    }
    
    if(res == word) cout << "I love UCPC";
    else cout << "I hate UCPC";
}