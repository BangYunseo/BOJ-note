#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int T; 
    cin >> T;
    
    double d, f, p, res;
    for(int i = 0; i < T; i++){
        cin >> d >> f >> p;
        res = f * p * d;
        cout << fixed << setprecision(2) << "$" << res << endl;
    }
}