#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    
    int minV = min(M, K);
    int minV2 = min((N - M), (N - K));
    cout << (minV + minV2);
}