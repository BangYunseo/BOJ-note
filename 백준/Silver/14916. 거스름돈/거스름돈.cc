#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int arr[100001];
    int n;
    cin >> n;

    memset(arr, -1, sizeof(arr));
    arr[0] = -1;
    arr[1] = -1;
    arr[2] = 1;
    arr[3] = -1;
    arr[4] = 2;
    arr[5] = 1;
    arr[6] = 3;
    arr[7] = 2;
    arr[8] = 4;
    for(int i = 9; i <= n; i++){
        arr[i] = arr[i - 5] + 1;
    }
    cout << arr[n];
}