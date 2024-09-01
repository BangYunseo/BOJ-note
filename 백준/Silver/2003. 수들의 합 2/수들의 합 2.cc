#include <iostream>

using namespace std;

int N, M;
int count = 0;

int main(){
    cin >> N >> M;
    int arr[N + 1];

    for(int i = 0; i < N; i++) cin >> arr[i];

    int start = 0, end = 0;
    int res = arr[0];

    while(start <= end && end < N){
        if(res < M){
            res += arr[++end];
        } else if(res == M){
            count++;
            res += arr[++end];
        } else if(res > M){
            res -= arr[start++];

            if(start > end){
                end = start;
                res = arr[start];
            }
        }
    }
    cout << count;
}