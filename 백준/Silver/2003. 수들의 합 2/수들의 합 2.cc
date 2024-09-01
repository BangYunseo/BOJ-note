#include <iostream>

using namespace std;

int main(){
    long long int N, M;
    cin >> N >> M;
    
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int res = 0, count = 0;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            res += arr[j];
            if(res == M){
                count++;
                res = 0;
                break;
            }
        }
        if(res != 0) res = 0;
    }
    cout << count;
}