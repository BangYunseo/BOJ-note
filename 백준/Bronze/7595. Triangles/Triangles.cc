#include <iostream>

using namespace std;

int main(){
    int N;
    while(true){
        cin >> N;
        if(N == 0) break;
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= i; j++){
                cout << '*';
            }
            cout << endl;
        }
    }
}