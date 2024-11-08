#include <iostream>

using namespace std;

long long int Triangle[101] = {0, };
int main(){
    int T;
    cin >> T;

    Triangle[1] = 1;
    Triangle[2] = 1;
    Triangle[3] = 1;
    Triangle[4] = 2;
    Triangle[5] = 2;
    
    int N;
    
    for(int i = 6; i < 101; i++){
        Triangle[i] = Triangle[i - 3] + Triangle[i - 2];
    }
    
    for(int i = 0; i < T; i++){
        cin >> N;
        cout << Triangle[N] << endl;
    }
}