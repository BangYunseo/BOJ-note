#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double X1, X2, Y1, Y2, R1, R2;
    cin >> X1 >> Y1 >> R1;
    cin >> X2 >> Y2 >> R2;

    double distance = pow((X2 - X1), 2) + pow((Y2 - Y1), 2);
    if(pow((R1 + R2), 2) > distance) cout << "YES";
    else cout << "NO";
}