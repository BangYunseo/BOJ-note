#include <iostream>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    
    int arr[N];
    for(int i = 0; i < N; i++) 
        cin >> arr[i];
    
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == K) count++;
        }
    }
    cout << count;
}