#include <iostream>
#include <vector>
using namespace std;

int k;
int lotto[6], S[13];

void getNum(int start, int depth){
    if(depth == 6){
        for(int i = 0; i < 6; i++){
            cout << lotto[i] << ' ';
        }
        cout << endl;
        return;
    }
    for(int i = start; i < k; i++){
        lotto[depth] = S[i];
        getNum(i + 1, depth + 1);
    }
}
int main(){
    while(1){
        cin >> k;
        if(k == 0) break;
        for(int i = 0; i < k; i++) cin >> S[i];
        getNum(0, 0);
        cout << endl;
    }
}