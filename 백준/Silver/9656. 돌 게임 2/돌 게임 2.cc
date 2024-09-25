#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, count = 0;
    cin >> N;
    
    int temp = (N / 3) + (N % 3);
    if(temp % 2 == 0) cout << "SK";
    else cout << "CY";
}