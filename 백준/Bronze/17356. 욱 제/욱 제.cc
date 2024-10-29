#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double A, B, M;
    cin >> A >> B;

    M = (B - A) / 400;
    double res = 1 / (1 + pow(10, M));
    printf("%.15lf", res);
}