#include <iostream>

using namespace std;

int main(){
    int T, max = 0;
    cin >> T;
    
    int arr[5];
    for(int i = 0; i < T; i++){
        int max = 0;
        cout << "Case #" << i + 1 << ": ";
        for(int j = 0; j < 5; j++){
            cin >> arr[j];
            if(arr[j] > max) max = arr[j];
        }
        cout << max << endl;
    }
}