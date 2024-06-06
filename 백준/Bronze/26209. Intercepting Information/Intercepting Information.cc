#include <iostream>
#include <string>

using namespace std;

int main(){
    int arr[8];
    string res = "S";
    for(int i = 0; i < 8; i++){
        cin >> arr[i];
        if((arr[i] != 0) && (arr[i] != 1)){
            res = "F";
        }
    }
    cout << res;
}