#include <iostream>

using namespace std;

int main(){
    int w, h, p, q, t;
    bool checkW = true, checkH = true; 
    cin >> w >> h >> p >> q >> t;

    int rawX = (p + t) % (2 * w);
    int rawY = (q + t) % (2 * h);

    if(rawX >= w) rawX = 2 * w - rawX;
    if(rawY >= h) rawY = 2 * h - rawY;

    cout << rawX << ' ' << rawY;
}