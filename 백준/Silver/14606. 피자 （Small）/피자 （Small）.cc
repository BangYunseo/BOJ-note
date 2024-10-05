#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int arr[10];
    arr[0] = 0;
    for(int i = 1; i < N; i++){
        arr[i] = i + arr[i - 1];
    }
    cout << arr[N - 1];
}