#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[10];
int num[10];

void backTracking(int a, int len){
    if(len == M){
        for(int i = 0; i < M; i++) 
            cout << num[i] << ' ';
        cout << endl;
        return;
    }
    
    int temp = 0;
    
    for(int i = a; i < N; i++){
        if(arr[i] != temp){
            num[len] = arr[i];
            temp = num[len];
            backTracking(i, len + 1);
        }
    }
    return;
}

int main(){
    cin >> N >> M;
    
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr + N);
    backTracking(0, 0);
    
    return 0;
}