#include <iostream>
#include <cmath>

#define MOD 1000000000
#define MAX 1000001
using namespace std;

long long fibo(int num){
    long long fib[MAX];
    
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i = 2; i <= num; i++){
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }
    
    return fib[num] % MOD;
}
int main(){
    int n, a = 1;
    cin >> n;
    
    if(n < 0){
        n *= -1;
        if(n % 2 == 0) 
            a = -1;
    }
    
    if(n == 0) a = 0;
    cout << a << endl << fibo(n);
}