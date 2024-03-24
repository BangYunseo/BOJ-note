#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int arr[10000001];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;

    for(int i = 4; i <= N; i++){
        arr[i] = arr[i - 1] + 1;
        if (i % 2 == 0)
            arr[i] = min(arr[i], arr[i / 2] + 1);
        if (i % 3 == 0)
            arr[i] = min(arr[i], arr[i / 3] + 1);
    }
    cout << arr[N] << endl;
}