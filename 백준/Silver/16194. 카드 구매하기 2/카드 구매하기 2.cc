#include <iostream>
#include <algorithm>
using namespace std;

int N;
int main(){
    int arr[10001];
    int res[10001];
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
    
    for(int i = 1; i <= N; i++){
        res[i] = arr[i];
        for(int j = 1; j <= i; j++)
            res[i] = min(res[i], res[i - j] + res[j]);
    }
    cout << res[N];
}