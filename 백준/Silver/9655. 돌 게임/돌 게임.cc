#include <iostream>

using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    
    int temp = (N / 3) + (N % 3);
    if(temp % 2 == 0) cout << "CY";
    else cout << "SK";
}