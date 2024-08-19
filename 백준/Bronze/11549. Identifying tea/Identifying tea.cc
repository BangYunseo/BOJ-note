#include <iostream>

using namespace std;

int main(){
    int answer;
    cin >> answer;
    
    int arr[5], count = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        if(arr[i] == answer) count++;
    }
    cout << count;
}