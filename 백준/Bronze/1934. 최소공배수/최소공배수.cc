#include <iostream>

using namespace std;

int GCD(int a, int b){
    if(b == 0) return a;
    return GCD(b, a % b);
}

int main(){
    long long int T, A, B, res;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        res = GCD(A, B);
        cout << A * B / res << endl;
    }
}