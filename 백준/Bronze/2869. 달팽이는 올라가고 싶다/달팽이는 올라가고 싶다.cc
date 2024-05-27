#include <iostream>

using namespace std;

int A, B, V;
int main(){
    cin >> A >> B >> V;
    int res = (V - A) / (A - B);
    if((V - A) % (A - B) == 0) res++;
    else res += 2;
    cout << res;
}