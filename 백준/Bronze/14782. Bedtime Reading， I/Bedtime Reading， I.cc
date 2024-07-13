#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int N;
    cin >> N;
    
    long long int sum = 0;
    for(int i = 1; i <= N; i++){
        if(N % i == 0) sum += i;
    }
    cout << sum;
    return 0;
}