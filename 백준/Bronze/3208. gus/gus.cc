#include <iostream>

using namespace std;

int main(){
    int M, N;
    cin >> M >> N;
    
    if(M > N) {
        cout << 2 * (N - 1) + 1;
    } else {
        cout << 2 * (M - 1);
    }
}