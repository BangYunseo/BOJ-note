#include <iostream>

using namespace std;

int main(){
    long long int k, w, m;
    cin >> k >> w >> m;

    int temp = (w - k) / m;
    if((w - k) % m != 0) temp += 1;
    cout << temp;
}