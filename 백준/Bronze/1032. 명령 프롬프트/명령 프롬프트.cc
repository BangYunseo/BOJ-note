#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    string stringV, word;
    cin >> stringV;
    while(N--){
        cin >> word;
        for(int i = 0; i < word.length(); i++){
            if(stringV[i] != word[i]) stringV[i] = '?';
        }
    }
    cout << stringV;
}