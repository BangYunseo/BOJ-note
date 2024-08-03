#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    long long int arr[100] = {1, 1, 2, 4, 0};
    for(int i = 4; i < 68; i++){
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
    }
    
    int temp;
    for(int i = 0; i < t; i++){
        cin >> temp;
        cout << arr[temp] << endl;
    }
}