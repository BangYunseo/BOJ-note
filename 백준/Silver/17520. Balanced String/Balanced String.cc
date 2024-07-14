#include <iostream>

using namespace std;

long long int res[100001];
int main(){
    long long int n;
    cin >> n;
    
    res[1] = 2;
    res[2] = 2;
    for(long long int i = 3; i <= n; i++){
        if(i % 2 == 0) res[i] = (res[i - 1] % 16769023);
        else res[i] = ((res[i - 1] % 16769023) + (res[i - 2] % 16769023)); 
    }
    
    cout << res[n] % 16769023;
}