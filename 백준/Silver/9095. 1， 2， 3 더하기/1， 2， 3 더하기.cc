#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int T, n;
int arr[12];

int recur(int num){
    if(num == 1) return 1;
    if(num == 2) return 2;
    if(num == 3) return 4;
    if(arr[num] != -1) return arr[num];
    return arr[num] = recur(num - 1) + recur(num - 2) + recur(num - 3);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> T;
    while(T--){
        cin >> n;
        memset(arr, -1, sizeof(arr));
        cout << recur(n) << endl;
    }
    return 0;
}