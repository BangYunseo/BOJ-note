#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float w, h;
    cin >> w >> h;
    double res = w * h * 1/2;
    printf("%.1f", res);
}