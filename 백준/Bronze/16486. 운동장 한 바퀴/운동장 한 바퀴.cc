#include <iostream>

using namespace std;

int main(){
    float d1, d2;
    cin >> d1 >> d2;
    
    float res = (d2 * 2 * 3.141592) + (d1 * 2);
    printf("%.6f", res);
}