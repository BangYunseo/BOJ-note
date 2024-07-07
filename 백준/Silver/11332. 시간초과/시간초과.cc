#include <iostream>
#include <cmath>

using namespace std; 

double log_f(double n){
    int i = 1;
    double v = 1;
    while((v *= ++i) <= n);
    return i - 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int C;
    cin >> C;
    
    string S;
    double N, T, L;
    for(int i = 0; i < C; i++){
        cin >> S >> N >> T >> L;
        
        L *= 100000000;
        L /= T;
        
        bool how = false;
        if(S == "O(N)" && N > L) how = true;
        else if(S == "O(N^2)" && N * N > L) how = true;
        else if(S == "O(N^3)" && N * N * N > L) how = true;
        else if(S == "O(2^N)" && N > log2(L)) how = true;
        else if(S == "O(N!)" && N > log_f(L)) how = true; 
        
        if(!how){
            cout << "May Pass.\n";
        } else{
            cout << "TLE!\n";
        }
    }
}