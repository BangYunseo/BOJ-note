#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int arr[101];

int main(){
    int N;
    cin >> N;

    cin >> arr[0];
    for(int i = 1; i < N; i++){
        cin >> arr[i];
        int temp = gcd(arr[0], arr[i]);
        
        printf("%d/%d\n", arr[0] / temp, arr[i] / temp);
    }
}