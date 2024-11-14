#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int count[50001] = {0, };
    for(int i = 1; i <= n; i++){
        count[i] = count[i - 1] + 1;
        for(int j = 1; j * j <= i; j++){
            count[i] = min(count[i], count[i - j * j] + 1);
        }
    }
    cout << count[n];
}