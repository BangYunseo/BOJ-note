#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int R;
    cin >> R;
    
    double res = R * R * M_PI;
    printf("%.6lf\n", res);
    res = 2 * R * R; 
    printf("%.6lf\n", res);
}