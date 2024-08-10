#include <iostream>

using namespace std;

int main(){
    int D, H, M;
    cin >> D >> H >> M; 
    
    int total = ((D - 11) * 24 * 60) + ((H - 11) * 60) + (M - 11);
    
    if(D < 11 || total < 0){
        cout << -1;
    }
    else{
        cout << total;
    }
}