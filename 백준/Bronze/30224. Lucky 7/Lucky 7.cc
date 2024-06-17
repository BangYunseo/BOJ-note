#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    string word = to_string(N);
    int count = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] == '7') count++;
    }
    if(count != 0){
        if(N % 7 != 0){
            cout << 2;
        }
        else{
            cout << 3;
        }
    }
    else if(count == 0){
        if(N % 7 != 0){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
}