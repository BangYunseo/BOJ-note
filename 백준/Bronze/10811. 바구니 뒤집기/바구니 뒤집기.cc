#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    int arr[101];
    
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;    
    }
    int temp1, temp2;
    for(int i = 0; i < M; i++){
        cin >> temp1 >> temp2;
        reverse(arr + temp1 - 1, arr + temp2);
    }
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << ' ';
    }
}
