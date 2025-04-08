#include <iostream>

using namespace std;

int main(){
    int N, temp;
    cin >> N;

    int sum = 8 * (N - 1);
    while(N--){
        cin >> temp;
        sum += temp;
    }
    cout << (sum / 24) << ' ' << (sum % 24);
}