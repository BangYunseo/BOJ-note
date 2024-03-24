#include <iostream>
using namespace std;
int main() {
	int H, M, min;
    cin >> H >> M >> min;
    H += (min / 60);
    M += (min % 60);
    if(M >= 60){
        while(M >= 60){
            M -= 60;
            H += 1;
        }
    }
    if(H >= 24){
        while(H >= 24)
            H -= 24;
    }
    cout << H << " " << M;
}