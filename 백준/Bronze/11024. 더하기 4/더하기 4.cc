#include <iostream>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();
    
    string word;
    while(T--){
        long long int res = 0;
        int index = 0;
        getline(cin, word);
        bool check = false;
        
        for(int i = 0; i < word.length(); i++){
            if(word[i] >= '0' && word[i] <= '9' && !check){
                check = true;
                index = i;
            }
            else if(word[i] == ' '){
                res += stoi(word.substr(index, i - index));
                check = false;
            }
            
            if(i == word.length() - 1){
                res += stoi(word.substr(index, i - index + 1));
            }
        }
        cout << res << endl;
    }
}