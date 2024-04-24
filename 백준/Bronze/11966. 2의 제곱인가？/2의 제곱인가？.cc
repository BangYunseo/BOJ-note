#include <iostream>
#include <cmath>
using namespace std;

int N;
int main(){
    cin >> N;

    int res = 0;
    for(int i = 0; i <= 30; i++){
        if(pow(2, i) == N) res = 1;
    }
    cout << res;
}