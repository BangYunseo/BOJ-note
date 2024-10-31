#include <iostream>

using namespace std;

int main(){
    int score[3];
    for(int i = 0; i < 3; i++) cin >> score[i];
    int res = score[0] + score[1] * 2 + score[2] * 3;
    if(res >= 10) cout << "happy";
    else cout << "sad";
}