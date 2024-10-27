#include <iostream>
using namespace std;

int main() {
    int temp, a = 5, b = 3;
    
    temp = a;
    a = b;
    b = temp;
    cout << b << endl << a << endl;
    return 0;
}