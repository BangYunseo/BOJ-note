#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    for(int a = 1; a <= N; a++) arr[a] = a;
    int i, j;
    while(M--){
        cin >> i >> j;
        if(i == j) continue;

        for(int b = 0; b <= (j - i) / 2; b++) swap(arr[i + b], arr[j - b]);
    }
    for(int d = 1; d <= N; d++) cout << arr[d] << ' ';
}