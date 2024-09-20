#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, L, H;
    cin >> N >> L >> H;
    
    int arr[101];
    for(int i = 0; i < N; i++) cin >> arr[i];
    
    sort(arr, arr + N);
    
    double res = 0;
    for(int i = 0 + L; i < N - H; i++) res += arr[i];
    int count = N - L - H;
    res = (double)res / count;
    cout.precision(15);
    cout << res;
}