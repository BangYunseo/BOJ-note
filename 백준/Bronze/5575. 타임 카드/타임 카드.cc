#include <iostream>

using namespace std;

int main(){
    int h1, h2, m1, m2, s1, s2, res_h, res_m, res_s, temp;
    
    for(int i = 0; i < 3; i++){
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        temp = ((h2 * 60 * 60) + (m2 * 60) + s2) - ((h1 * 60 * 60) + (m1 * 60) + s1);
        res_h = temp / 3600;
        temp %= 3600;
        res_m = temp / 60;
        temp %= 60;
        res_s = temp;
        cout << res_h << ' ' << res_m << ' ' << res_s << endl;
    }
}