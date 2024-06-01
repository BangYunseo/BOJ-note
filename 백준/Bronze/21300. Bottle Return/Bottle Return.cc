#include <iostream>

using namespace std;

int arr[6];
int main(){
    int res = 0;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        res += 5 * arr[i];
    }
    cout << res;
}