#include <iostream>

using namespace std;

int main(){
    int H, M;
    cin >> H >> M;
    if(H >= 20)
        cout << ((24 - H) + M);
    else if(H < 20)
        cout << (M - H);
}