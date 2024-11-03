#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long int N, M;
    cin >> N >> M;
    
    int arr[N + M];
    for(int i = 0; i < N + M; i++) 
        cin >> arr[i];
    sort(arr, arr + N + M);
    for(int i = 0; i < N + M; i++) 
        cout << arr[i] << ' ';
}