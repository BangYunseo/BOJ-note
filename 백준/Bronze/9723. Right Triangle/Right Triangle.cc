#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    int a, b, c;
    for(int i = 0; i < T; i++){
        cin >> a >> b >> c;
        if((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a)){
            cout << "Case #" << i + 1 << ": YES" << endl;
        }
        else{
            cout << "Case #" << i + 1 << ": NO" << endl;
        }
    }
}