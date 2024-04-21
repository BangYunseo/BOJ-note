#include <iostream>
#include <algorithm>
using namespace std;

int N;
int arr[1001];
int resarr[1001];

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            resarr[i] = max(resarr[i], resarr[i-j] + arr[j]);
        }
    }
    
    
    cout << resarr[N] << '\n';
    return 0;
}