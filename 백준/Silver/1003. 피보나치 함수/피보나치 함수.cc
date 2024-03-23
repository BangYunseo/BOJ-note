#include <iostream>

using namespace std;

int main(){
    int zero[41] = {1, 0, };
    int one[41] = {0, 1, };
    int T, N;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        for(int j = 2; j <= N; j++){
            zero[j] = zero[j-2] + zero[j-1];
            one[j] = one[j-2] + one[j-1];
        }
        cout << zero[N] << ' ' << one[N] << endl;
    }
}