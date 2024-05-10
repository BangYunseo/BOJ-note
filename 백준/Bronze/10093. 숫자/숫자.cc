#include <iostream>

using namespace std;

int main(){
    long long A, B;
    cin >> A >> B;
    if(A == B) {
        cout << 0 << endl;
    }
    else{
        if(A > B){
            long long temp;
            temp = A;
            A = B;
            B = temp;
        }   
        cout << B - A - 1 << endl;
        for(long long i = A + 1; i < B; i++){
            cout << i << ' ';
        }
    }
}