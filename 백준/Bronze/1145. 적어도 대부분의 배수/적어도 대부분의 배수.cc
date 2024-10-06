#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++) cin >> arr[i]; 

    sort(arr, arr + 5);
    int count = 0;
    int num = 1;
    for(num = 1; num < 1000000; num++){
        for(int j = 0; j < 5; j++){
            if(num % arr[j] == 0) count++;
        }
        if(count >= 3) break;
        else count = 0;
    }
    cout << num;
}