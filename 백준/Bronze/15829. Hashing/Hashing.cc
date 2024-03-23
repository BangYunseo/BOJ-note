#include <iostream>
#include <string>
#include <cmath>
#define r 31
#define M 1234567891
using namespace std;

int main(){
    long long res = 0;
    long long a = 1;
    string word;
    int L;
    cin >> L;
    cin >> word;

    for(int i = 0; i < L; i++){
        res += ((long(word[i]) - 96) * a) % M;
        a = (a * r) % M; 
    }
    res %= M;
    cout << res;
}