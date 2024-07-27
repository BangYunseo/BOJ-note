#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    
    double d1, d2, d3;
    
    d1 = hypot(xB - xC, yB - yC);
    d2 = hypot(xC - xA, yC - yA);
    d3 = hypot(xA - xB, yA - yB);
    
    if((xB - xA) * (yC - yA) == (yB - yA) * (xC - xA)){
        cout << "-1";
    }
    else{
        cout << fixed;
        cout.precision(16);
        cout << (max(d1, max(d2, d3)) - min(d1, min(d2, d3))) * 2 << endl;
    }
}