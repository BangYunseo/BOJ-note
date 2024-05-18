#include <iostream>

using namespace std;

int arr[100001] = {1, 3};
int main(){
    int N;
    cin >> N;
    for(int i = 2; i <= N; i++) arr[i] = (arr[i - 1] * 2 + arr[i - 2]) % 9901;
    cout << arr[N];
}