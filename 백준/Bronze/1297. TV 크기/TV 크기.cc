#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double D, H, W;
    cin >> D >> H >> W;
    
    double mulV = D / sqrt(H * H + W * W);
    
    int height = mulV * H;
    int width = mulV * W;
        
    cout << height << ' ' << width;
}