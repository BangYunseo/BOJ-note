#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M, K;
    cin >> N >> M >> K;
    
    int count = min(M, N / 2);
    count = min(count, (N + M - K) / 3);
    cout << count;
}