#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
        
    long long arr[80] = {1, 1, 2, 3, 5, 8, }; 
    
    for(int i = 2; i <= N; i++) arr[i] = arr[i - 1] + arr[i - 2];

    long long res = (arr[N - 1] * 2) + (arr[N] * 2);
    cout << res;
}