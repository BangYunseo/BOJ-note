#include <iostream>

using namespace std;
int gcd(int a, int b){
    int temp;
    while(true){
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
        a -= b;
        if(a == b) break;
    }
    return a;
}
int main(){
    long long int A, B;
    cin >> A >> B;
    cout << gcd(A, B);
}