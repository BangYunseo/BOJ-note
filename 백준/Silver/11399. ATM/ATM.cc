#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int res = 0;
    
    int *arr = new int[N];
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){ 
            res += arr[j];
        }
    }
    cout << res;
    delete[] arr;
}