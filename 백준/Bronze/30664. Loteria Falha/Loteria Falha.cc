#include <iostream>
#include <string>

using namespace std;

// Function to compute the modulus of a large number represented as a string
int mod42(const string& num) {
    int remainder = 0;
    for (char digit : num) {
        remainder = (remainder * 10 + (digit - '0')) % 42;
    }
    return remainder;
}

int main() {
    string temp;
    while (true) {
        cin >> temp;
        if (temp == "0")
            break;

        // Check if the number is a multiple of 42
        if (mod42(temp) == 0)
            cout << "PREMIADO" << endl;
        else
            cout << "TENTE NOVAMENTE" << endl;
    }
    return 0;
}
