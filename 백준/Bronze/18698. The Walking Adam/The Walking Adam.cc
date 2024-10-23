#include <iostream>

using namespace std;

int main(){
    int T, count;
    cin >> T;
    
    string word;
    while(T--){
        count = 0;
        cin >> word;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == 'U') count++;
            else break;
        }
        cout << count << endl;
    }
}