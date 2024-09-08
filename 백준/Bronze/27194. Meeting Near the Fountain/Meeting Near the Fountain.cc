#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    double n, T, m, x, y;
    cin >> n >> T >> m >> x >> y;
    
    double time_street = m / x;
    double time_part = (n - m) / y;
    double time_total = time_street + time_part;

    double time_left = T * 60;
    if(time_total <= time_left) cout << 0;
    else{
        double time_delay = time_total - time_left;
        double time_min = ceil(time_delay / 60);
        cout << time_min;
    }
}