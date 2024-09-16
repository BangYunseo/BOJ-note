#include <iostream>

using namespace std;

int main(){
    int a, w, v;
    cin >> a >> w >> v;
    
    if(a * v <= w) cout << 1;
    else cout << 0;
}