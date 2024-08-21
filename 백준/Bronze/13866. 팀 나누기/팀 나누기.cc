#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long int arr[4];
    for(int i = 0; i < 4; i++) cin >> arr[i];
    
    sort(arr, arr + 4);
    int temp1 = arr[3] + arr[0];
    int temp2 = arr[1] + arr[2];
    int res = temp1 - temp2;
    if(res < 0) res *= (-1);
    cout << res;
}