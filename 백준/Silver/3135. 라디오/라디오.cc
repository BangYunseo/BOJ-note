#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int A, B, N;

int main(){
    cin >> A >> B >> N;
    vector<int> channel(N);
    
    int temp;
    for(int i = 0; i < N; i++) 
        cin >> channel[i];
    
    int res = abs(A - B);
    for(int i = 0; i < N; i++){
        res = min(res, abs(channel[i] - B) + 1);
    }
    cout << res;
}