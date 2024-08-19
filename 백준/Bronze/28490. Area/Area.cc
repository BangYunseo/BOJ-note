#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    int w, d, max = 0;
    for(int i = 0; i < T; i++){
        cin >> w >> d;
        int temp = w * d;
        if(temp > max) max = temp;
    }
    cout << max;
}