#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N; 
    
    char how;
    int score_P = 0, score_D = 0;
    for(int i = 0; i < N; i++){
        cin >> how;
        if(how == 'P'){
            score_P++;
        } else if(how == 'D'){
            score_D++;
        }
        int temp = score_D - score_P;
        if(abs(temp) == 2){
            break;
        }
    }
    cout << score_D << ':' << score_P;
}