#include <iostream>

using namespace std;

int N, count = 0;

bool isPrime(int a){
    if (a == 1) return false;
    else if(a == 2) return true;
    for(int i = 2; i < a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    int temp;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(isPrime(temp)) count++;
    }
    cout << count;
}