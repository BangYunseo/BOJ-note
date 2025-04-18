#include <iostream>

using namespace std;

int N, M, temp, i, j, arr[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }
        
    cin >> M;
    while(M--){
        cin >> i >> j;
        cout << arr[j] - arr[i - 1] << '\n';
    }
}