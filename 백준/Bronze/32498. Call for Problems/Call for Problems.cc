#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int d, count = 0;
    for(int i = 0; i < n; i++){
        cin >> d;
        if(d % 2 != 0) count++;
    }
    cout << count;
}