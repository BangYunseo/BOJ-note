#include <iostream>

using namespace std;

int main(){
    int temp, score_A = 0, score_B = 0;
    
    for(int i = 3; i >= 1; i--){
        cin >> temp;
        score_A += temp * i;
    }
    
    for(int i = 3; i >= 1; i--){
        cin >> temp;
        score_B += temp * i;
    }
    
    if(score_A > score_B) cout << "A";
    else if(score_A < score_B) cout <<  "B";
    else cout << "T";
}