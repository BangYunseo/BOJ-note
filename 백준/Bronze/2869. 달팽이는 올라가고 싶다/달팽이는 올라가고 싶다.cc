#include <iostream>

using namespace std;

int A, B, V;
int main(){
    cin >> A >> B >> V;
    int res = 1;
    res += (V - A) / (A - B);
    if((V - A) % (A - B) != 0) res++;
    if (A >= V) cout << '1';
    else cout << res;
}