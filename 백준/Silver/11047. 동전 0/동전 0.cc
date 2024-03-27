#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, K, count = 0, temp = 0, res = 0;
    int arr[11] = {0, };
    cin >> N >> K;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    for(int i = N - 1; i >= 0; i--){
        temp = 0;
        if(arr[i] <= K){
            for(int j = 1; arr[i] * j <= K; j++){
                count++;
                temp = j;
            }
            K -= arr[i] * temp;
        }
        else
            continue;
    }
    cout << count;
}