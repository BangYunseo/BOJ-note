#include <iostream>

using namespace std;

int N;
int P[16];
int T[16];
int res[16] = {0, };

int Max(int a, int b){
    return a > b? a : b;
}

void DP(){
    int dl;
    for(int i = N; i > 0; i--){
        dl  = i + T[i];
        if(dl > N + 1){
            res[i] = res[i + 1];
        }
        else{
            res[i] = Max(res[i + 1], res[dl] + P[i]);
        }
    }
}
int main(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> T[i] >> P[i];
    }
    DP();
    
    cout << res[1] << endl;
}