#include <iostream>

using namespace std;

int main(){
    int g, p, t;
    cin >> g >> p >> t;
    
    int personal = g * p;
    int grouping = g + (p * t);
    
    if(personal < grouping) cout << 1;
    else if(personal == grouping) cout << 0;
    else cout << 2;
}