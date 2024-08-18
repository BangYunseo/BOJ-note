#include <iostream>

using namespace std;

int main(){
    int N, count = 0;
    cin >> N;

    int arr[10000] = {0, };
    while(true){
        count++;
        N = N % 1000;
        int temp = N / 10;
        arr[temp]++;
        if(arr[temp] > 1) 
            break;
        N = temp * temp;
    }
    cout << count;
}