#include <iostream>

using namespace std;

int N;
int arr[1000001] = {0};

int main(){
    cin >> N;
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    
    for(int i = 4; i <= N; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    
    cout << arr[N];
}