#include <iostream>

using namespace std;

int N, M, sum, i, j, arr[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> arr[i];

    cin >> M;
    while(M--){
        cin >> i >> j;
        sum = 0;
        for(int a = i; a <= j; a++) 
            sum += arr[a];
        cout << sum << '\n';
    }
}