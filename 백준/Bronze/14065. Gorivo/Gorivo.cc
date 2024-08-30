#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double car_mile;
    cin >> car_mile;
    
    double res = 100.00 / ((1.609344 / 3.785411784) * car_mile);
    printf("%.6lf\n", res);
}