#include <iostream>

using namespace std;

int main(){
    int arr[9], sum = 0;
    int a, b;
    
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - (arr[i] + arr[j]) == 100){
                a = i; 
                b = j;
                break;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(k == a || k == b) continue;
        else cout << arr[k] << endl;
    }
}