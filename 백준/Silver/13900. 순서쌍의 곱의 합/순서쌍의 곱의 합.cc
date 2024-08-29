#include <iostream>

using namespace std;

int main(){
    int N; 
    cin >> N;
    
    long arr[100001];
    long sumarr[1000001];
    long res = 0;
    
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }

    sumarr[0] = arr[0];

    for(int i = 1; i < N; ++i){
        sumarr[i] = sumarr[i - 1] + arr[i];
    }
    for(int i = 0; i < N - 1; ++i){
        res += arr[i] * (sumarr[N - 1] - sumarr[i]);
    }
    cout << res;
}