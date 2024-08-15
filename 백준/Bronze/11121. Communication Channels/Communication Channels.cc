#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    string word1, word2;
    for(int i = 0; i < T; i++){
        cin >> word1 >> word2;
        if(word1 == word2) cout << "OK\n";
        else cout << "ERROR\n";
    }
}