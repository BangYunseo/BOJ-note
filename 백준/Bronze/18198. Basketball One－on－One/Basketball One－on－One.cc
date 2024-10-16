#include <iostream>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    int score_A = 0, score_B = 0;
    for(int i = 0; i < word.length() - 1; i += 2){
        if(word[i] == 'A') score_A += word[i + 1];
        else if(word[i] == 'B') score_B += word[i + 1];
    }
    if(score_A > score_B) cout << "A";
    else cout << "B";
}