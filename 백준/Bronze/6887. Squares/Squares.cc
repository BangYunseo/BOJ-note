#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int radius;
    cin >> radius;
    
    radius = sqrt(radius);
    cout << "The largest square has side length " << radius << '.';
}