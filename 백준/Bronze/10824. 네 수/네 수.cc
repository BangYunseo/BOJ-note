#include <iostream>
#include <string>
using namespace std;

int A, B, C, D;
int main(){
    cin >> A >> B >> C >> D;
    string res1 = to_string(A) + to_string(B);
    string res2 = to_string(C) + to_string(D);

    long res = stol(res1) + stol(res2);
    cout << res;
}