#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    bool state = true;
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= i; j++){
            if(i + j == A && i - j == B && state == true){
                cout << i << ' ' << j;
                state = false;
            }
        }
    }
    if(state == true){
        cout << -1;
    }
}