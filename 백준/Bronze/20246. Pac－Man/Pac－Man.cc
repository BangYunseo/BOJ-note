#include <iostream>

using namespace std;

int main() {
    int r, c;
    if (!(cin >> r >> c)) return 0;

    cout << r << " " << c << "\n";
    
    while (r > 0) {
        r--;
        cout << r << " " << c << "\n";
    }
    
    while (c > 0) {
        c--;
        cout << r << " " << c << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 10; j++) {
                if (i == 0 && j == 0) continue; 
                
                cout << i << " " << j << "\n";
            }
        } else {
            for (int j = 9; j >= 0; j--) {
                cout << i << " " << j << "\n";
            }
        }
    }
    return 0;
}