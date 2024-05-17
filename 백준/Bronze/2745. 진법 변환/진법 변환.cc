#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string N; 
    int B;
    cin >> N >> B;

    long long int res = 0;
    reverse(N.begin(), N.end());
    for(int i = 0; i < N.length(); i++){
        int temp = N[i] - '0';
        if(temp > 10) temp = int(N[i]) - 55;
        res += temp * pow(B, i);
    }
    cout << res;
}