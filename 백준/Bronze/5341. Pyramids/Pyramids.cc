#include <iostream>

using namespace std;

int main() {
    int N;
    while(true){
        cin >> N;
        if(N == 0){
            break;
        }
        int sum = 0;
        for(int i = 1; i <= N; i++){
            sum += i;
        }
        cout << sum << endl;
    }
}