#include <iostream>

using namespace std;

int main(){
    int d1, m1, y1, n1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> n1 >> d2 >> m2 >> y2;
    int temp = ((y2 - y1) * 360);
    if(m1 > m2) temp -= (m1 - m2) * 30;
    else temp += (m2 - m1) * 30;
    
    if(d1 > d2) temp -= (d1 - d2);
    else temp += (d2 - d1);

    int res = (n1 + temp) % 7;
    
    if(res == 0) cout << 7;
    else cout << res;
}