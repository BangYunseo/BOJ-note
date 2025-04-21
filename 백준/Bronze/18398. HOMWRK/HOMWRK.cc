#include <iostream>

using namespace std;

int main(){
    long long int T, N, A, B;
    
    cin >> T;
    while(T--){
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> A >> B;
            cout << (A + B) << ' ' << (A * B) << '\n';
        }
    }
}