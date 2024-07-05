#include <iostream>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();
    
    string word;
    char arr[30] = {'y', 'h', 'e', 's', 'o', 'c', 'v', 'x', 'd', 'u', 'i', 'g', 'l', 'b', 'k', 'r', 'z', 't', 'n', 'w', 'j', 'p', 'f', 'm', 'a', 'q'};
    
    for(int i = 1; i <= T; i++){
        getline(cin, word);
        cout << "Case #" << i << ": ";
        for(int j = 0; j < word.length(); j++){
            if(word[j] == ' ') cout << word[j];
            else cout << arr[word[j] - 'a'];
        }
        cout << endl;
    }
}