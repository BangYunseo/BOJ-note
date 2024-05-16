#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    if(N == 0){
        cout << "0\n";
        return 0;
    }
    
    string res;
    while(N != 0){
        if(N % (-2) == 0){
            res += "0";
            N /= -2;
        }
        else{
            res += "1";
            N = (N - 1) / -2;
        }
    }
    reverse(res.begin(), res.end());
    cout << res;
}