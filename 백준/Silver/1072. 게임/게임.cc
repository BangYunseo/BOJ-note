#include <iostream>

#define ll long long

using namespace std;

ll X, Y;

int main() {
    cin >> X >> Y;

    ll z = (100 * Y) / X;
    
    if(z >= 99){
        cout << -1 << endl;
    } else {
        int left = 0, right = 1000000000, mid = 0;

        while(left <= right){
            mid = (left + right) / 2;
            ll val = ((Y + mid) * 100) / (X + mid);

            if(z < val) right  = mid - 1;
            else left = mid + 1;
        }
        
        cout << left;
    }
}