#include <iostream>

using namespace std;

int ax, ay, az, cx, cy, cz, bx, by, bz;
int main(){
    cin >> ax >> ay >> az >> cx >> cy >> cz;
    cout << (cx - az) << ' ' << (cy / ay) << ' ' << (cz - ax);
}