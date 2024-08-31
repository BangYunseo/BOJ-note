#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N; cin >> N;
    
    int arr[N];
    int arr_set[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++){
        cin >> arr_set[i];
    }
    sort(arr, arr + N);
    sort(arr_set, arr_set + N);
    int res = 0;
    for(int i = 0; i < N; i++){
        res += arr[i] * arr_set[N - 1 - i];
    }
    cout << res;
}