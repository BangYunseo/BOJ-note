#include <iostream>

using namespace std;

int main(){
    int N, P;
    cin >> N >> P;
    
    int temp, min = P;
    
    if(N >= 20){
        temp = P * 0.75;
        if(min > temp) min = temp;
    } 
    
    if(N >= 15){
        temp = P - 2000;
        if(min > temp) min = temp;
    } 
    
    if(N >= 10){
        temp = P * 0.9;
        if(min > temp) min = temp;
    } 
    
    if(N >= 5){
        temp = P - 500;
        if(min > temp) min = temp;
    }

    if(min <= 0) cout << 0;
    else cout << min;
}