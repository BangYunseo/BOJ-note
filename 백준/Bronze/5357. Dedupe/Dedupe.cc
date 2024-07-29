#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    string word;
    for(int i = 0; i < N; i++){
        cin >> word;
        cout << word[0];
        for(int j = 1; j < word.length(); j++){
            if(word[j] != word[j - 1]){
                cout << word[j];
            }
        }
        cout << endl;
    }
}