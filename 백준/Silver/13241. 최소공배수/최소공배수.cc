#include <iostream>
#include <algorithm>
using namespace std;

long long int A, B, gcd;
int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a % b);
}

int main(){
    cin >> A >> B;
    gcd = GCD(A, B);
    cout << A * B / gcd;
}