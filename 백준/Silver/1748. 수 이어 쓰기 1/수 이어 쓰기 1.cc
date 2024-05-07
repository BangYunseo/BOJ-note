#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long N;
    cin >> N;
    
    long long len = 0;

    if(N < 10){
        cout << N;
        return 0;
    }
    for(long long i = 1; i <= N; i *= 10){
        len += N - i + 1;
    }
    cout << len;
}