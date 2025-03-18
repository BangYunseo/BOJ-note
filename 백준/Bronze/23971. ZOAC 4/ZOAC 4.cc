#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double H, W, N, M;
    cin >> H >> W >> N >> M;
    
    cout << (long long)ceil(H / (1 + N)) * (long long)ceil(W / (1 + M));
}