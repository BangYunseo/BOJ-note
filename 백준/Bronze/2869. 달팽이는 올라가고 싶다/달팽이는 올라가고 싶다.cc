#include <iostream>

using namespace std;

int A, B, V, resday = 1;
int main(){
    cin >> A >> B >> V;
    resday += (V - A) / (A - B);
    if((V - A) % (A - B) != 0)
        resday++;
    if(A >= V)
        cout << "1";
    else
        cout << resday;
}