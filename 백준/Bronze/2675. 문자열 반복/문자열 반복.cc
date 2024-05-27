#include <iostream>
#include <string>

using namespace std;

int T;
string word;

int main(){
    int R, S;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> R >> word;
        for(int k = 0; k < word.length(); k++){
            for(int j = 0; j < R; j++){
                cout << word[k];
            }
        }
        cout << endl;
    }
}