#include <iostream>

using namespace std;

int S;
string word;
int main(){
    cin >> S >> word;
    
    int count = 0;
    
    for(int i = 0; i < S; i++){
        if((word[i] == 'a') || (word[i] == 'e') || (word[i] == 'o') || (word[i] == 'i') || (word[i] == 'u')){
            count += 1;
        }
    }
    cout << count;
}