#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int N, i = 1;
    cin >> N;
    
    while(N >= i){
        N -= i;
        i++;
    }
    
    if(i & 1) cout << (i - N);
    else cout << 0;
}