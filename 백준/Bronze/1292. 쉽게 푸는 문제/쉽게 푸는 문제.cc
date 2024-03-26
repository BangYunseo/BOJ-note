#include <iostream>

using namespace std;

int main(){
    int A, B;
    int res = 0;
    int arr[1001] = {0, };
    int index = 0;
    cin >> A >> B;
    for(int i = 1; index < 1000; i++){
        for(int j = 0; j < i; j++){
            arr[index++] = i;
            if(index == 1000)
                break;
        }
    }
    for(int i = A; i < B + 1; i++){
        res += arr[i - 1];
    }
    cout << res;
}