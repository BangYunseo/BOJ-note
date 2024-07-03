#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    int a, b, sum = 0;
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        if(a == 136) sum += 1000;
        else if(a == 142) sum += 5000;
        else if(a == 148) sum += 10000;
        else if(a == 154) sum += 50000;
    }
    cout << sum;
}