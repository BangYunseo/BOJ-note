#include <iostream>

using namespace std;

long long int arr[100001];
long long int N, M;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;

    arr[0] = 0;
    for(long long int i = 1; i <= N; i++){
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    long long int temp1, temp2;
    for(long long int j = 0; j < M; j++){
        cin >> temp1 >> temp2;
        cout << (arr[temp2] - arr[temp1 - 1]) << '\n';
    }
}