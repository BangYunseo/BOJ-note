#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    int count_M = 0, count_O = 0, count_B = 0, count_I = 0, count_S = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] == 'M') count_M++;
        else if(word[i] == 'O') count_O++;
        else if(word[i] == 'B') count_B++;
        else if(word[i] == 'I') count_I++;
        else if(word[i] == 'S') count_S++;
    }
    
    if(count_M != 0 && count_O != 0 && count_B != 0 && 
       count_I != 0 && count_S != 0) cout << "YES";
    else cout << "NO";
}