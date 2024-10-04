#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    
    int arr[N] = {0, };
    for(int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    for(int i = 0; i < N; i++){
        if(arr[i] <= L) L += 1;
    }
    cout << L;
}