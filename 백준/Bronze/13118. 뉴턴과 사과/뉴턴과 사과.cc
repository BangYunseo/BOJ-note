#include <iostream>

using namespace std;

int main(){
    int arr[5];
    for(int i = 1; i <= 4; i++) cin >> arr[i];

    int x, y, z, index = 0; 
    cin >> x >> y >> z;
    for(int i = 1; i <= 4; i++){
        if(arr[i] == x) index = i;
    }

    if(index == 0) cout << 0;
    else cout << index;
}