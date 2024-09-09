#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 1; i < N; i++){
        for(int j = N - i; j > 0; j--) cout << " ";
        for(int k = 1; k <= (2 * i) - 1; k++){
            if(k == 1 || k == (2 * i) - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= ((2 * N) - 1); i++) 
        cout << "*";
}