#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, K, res = 0;
    int arr[11] = {0, };
    cin >> N >> K;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    for(int i = N - 1; i >= 0; i--){
        res += K / arr[i];
        K %= arr[i];
    }
    cout << res;
}