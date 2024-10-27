#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int res;
    for(int i = 0; i < 4; i++){
        res = 0;
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
            res += arr[i][j];
        }
        cout << res << endl;
    }
    return 0;
}