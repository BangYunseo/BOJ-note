#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int temp, res = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        res += temp;
    }
    cout << res;
}