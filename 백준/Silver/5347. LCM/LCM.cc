#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }

    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

unsigned long long LCM(unsigned long long a, unsigned long long b){
    unsigned long long g = gcd(a, b);
    return a / g * b;
}

int main(){
    long long int N, A, B;
    cin >> N;
    
    while(N--){
        cin >> A >> B;
        cout << LCM(A, B) << endl;
    }
}