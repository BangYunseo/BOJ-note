#include <iostream>

using namespace std;

int main(){
    int t1, t2, e1, e2, f1, f2;
    cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;

    long long int res1, res2;

    res1 = t1 * 3 + e1 * 20 + f1 * 120;
    res2 = t2 * 3 + e2 * 20 + f2 * 120;

    if(res1 > res2) cout << "Max";
    else if(res1 == res2) cout << "Draw";
    else cout << "Mel";
}