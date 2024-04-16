#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(NULL); 
    cout.tie(NULL); 
    ios_base::sync_with_stdio(false);

    string word;
    cin >> word;
    while(word.length() % 3 != 0) word = '0' + word;

    for(int i = 0; i < word.length(); i += 3){
        int num = (word[i] - '0') * 4 + (word[i+1] - '0') * 2 + (word[i+2] - '0') * 1;
        cout << num;
    }
}