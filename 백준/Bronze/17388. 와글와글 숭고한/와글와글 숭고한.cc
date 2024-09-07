#include <iostream>

using namespace std;

int main(){
    int arr[3], res = 0;
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        res += arr[i];
    }
    
    if(res >= 100) cout << "OK";
    else if(res < 100){
        int min = arr[0];
        int index = 0;
        for(int i = 1; i < 3; i++){
            if(min > arr[i]){
                min = arr[i];
                index = i;
            }
        }
        
        if(index == 0) cout << "Soongsil";
        else if(index == 1) cout << "Korea";
        else if(index == 2) cout << "Hanyang";
    }
}