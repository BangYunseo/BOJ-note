#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[41] = {0, 1, 1, };
    for(int i = 3; i <= n; i++) arr[i] = arr[i - 1] + arr[i - 2];
    cout << arr[n] << ' '<< (n - 2);
}