#include <iostream>

using namespace std;

int main(){
    long long int R, C, N;
    cin >> R >> C >> N;
    
    long long int width = (R / N), height = (C / N);
    
    if(R % N != 0) width += 1;
    if(C % N != 0) height += 1;
    
    cout << (width * height);
}