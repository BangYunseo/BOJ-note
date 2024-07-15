#include <iostream>

using namespace std;

int arr[100001];
int Min[100001];
int Max[100001];

int main(){
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        Min[i] = 1;
        Max[i] = 1;
        cin >> arr[i];
    }
    
    int max_length = 1;
    for(int i = 1; i < N; i++){
        if(arr[i] >= arr[i - 1]) Max[i] = Max[i - 1] + 1;
        if(Max[i] > max_length) max_length = Max[i];
    }
    
    for(int i = 1; i < N; i++){
        if(arr[i] <= arr[i - 1]) Min[i] = Min[i - 1] + 1;
        if(Min[i] > max_length) max_length = Min[i];
    }
    cout << max_length;
}