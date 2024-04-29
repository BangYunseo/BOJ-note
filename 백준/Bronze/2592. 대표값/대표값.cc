#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int arr[1001] = {0,}, sum = 0;
    int temp;
    for(int i = 0; i < 10; i++){
        cin >> temp;
        arr[temp] += 1;
        sum += temp;
    }
    int max = 0;
    int num = 0;
    for(int i = 0; i < 1000; i++){
        if(arr[i] > max){
            max = arr[i]; 
            num = i;
        }
    }
    cout << sum / 10 << endl;
    cout << num;
}