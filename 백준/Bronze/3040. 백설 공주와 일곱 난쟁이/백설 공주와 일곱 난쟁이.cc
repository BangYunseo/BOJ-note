#include <iostream>

using namespace std;

int main(){
    int arr[9], sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sum -= 100;
    int i, j;
    for(i = 0; i < 9; i++){
        for(j = i + 1; j < 9; j++){
            if(arr[i] + arr[j] == sum){
                arr[i] = arr[j] = 0;
                break;
            }
        }
        if((arr[i] == 0) && (arr[j] == 0)) break;
    }
    for(int i = 0; i < 9; i++){
        if(arr[i] != 0)  cout << arr[i] << endl;
    }
}