#include <iostream>

using namespace std;

int main(){
    int a, b, c, r, x = 0, y = 0;
    cin >> c >> r; 
    while(true){
        cin >> a >> b;
        if((a == 0) && (b == 0)) break;
        x += a;
        y += b;
        if(x > c) x = c;
        if(y > r) y = r;
        if(x < 0) x = 0;
        if(y < 0) y = 0;
        cout << x << ' ' << y << endl;
    }
}