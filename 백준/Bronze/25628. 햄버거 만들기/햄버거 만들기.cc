#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    A = A / 2;
    cout << min(A, B);
}