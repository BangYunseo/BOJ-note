#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for(int j = N - 1; j >= i; j--){
            cout << ' ';
        }
        for(int j = 2 * i - 1; j > 0; j--){
            if(j == 2 * i - 1 || j == 1) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
}