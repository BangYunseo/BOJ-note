#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[5];
    int min = -1;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        if(min == -1 || min > arr[i]) min = arr[i];
    }

    int num = min;
    while(true){
        int count = 0;
        for(int i = 0; i < 5; i++){
            if(num % arr[i] == 0) count++;
        }
        if(count >= 3) break;
        num++;
    }
    cout << num;
}