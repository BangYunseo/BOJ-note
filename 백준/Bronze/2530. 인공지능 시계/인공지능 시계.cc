#include <iostream>

using namespace std;

int main(){
    int H, M, S, sec, resH, resM, tempres;
    
    cin >> H >> M >> S;
    cin >> sec;
    
    resH = H * 3600;
    resM = M * 60;
    
    tempres = sec + S + resH + resM;
    H = tempres / 3600;
    tempres %= 3600;
    M = tempres / 60;
    tempres %= 60;
    S = tempres % 60;
    
    if(H >= 24){
        while(H >= 24)
            H -= 24;
    }
    
    cout << H << ' ' << M << ' ' << S;
}