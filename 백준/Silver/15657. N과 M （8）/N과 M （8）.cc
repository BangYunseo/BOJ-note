#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int arr[10];
int num[10];

void seq(int a, int len){
    if(len == M){
        for(int i = 0; i < M; i++){
            cout << num[i] << ' ';
        } cout << endl;
        return;
    }
    
    for(int i = a; i < N; i++){
        num[len] = arr[i];
        seq(i, len + 1);
    }
    return;
}

int main(){
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) cin >> arr[i];
    
    sort(arr, arr + N);
    
    seq(0, 0);
}