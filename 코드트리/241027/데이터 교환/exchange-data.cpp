#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp_1 = b, temp_2 = c;
    b = a;
    c = temp_1;
    a = temp_2;

    cout << a << endl << b << endl << c;
    return 0;
}