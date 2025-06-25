#include <iostream>

using namespace std;

long long int A, B;

long long int gcd(long long int a, long long int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    cin >> A >> B;
    for(int i = 0; i < gcd(A, B); i++)
        cout << 1;
}