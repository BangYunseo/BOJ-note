#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    int arr[5] = {0,};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + 5);
    sum /= 5;
    cout << sum << endl;
    cout << arr[2] << endl;
}