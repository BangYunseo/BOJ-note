#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;
    
    int res_A = A * P; 
    int res_B = B;
    
    if(P > C) 
        res_B += (P - C) * D;
    
    cout << min(res_A, res_B);
}