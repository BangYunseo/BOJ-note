#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int N, res = 0; 
    cin >> N;

    for(int i = 1; i < N; i++)
    {
        res += i * (N + 1);
    }
    cout << res;
}