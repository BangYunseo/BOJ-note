#include <iostream>

using namespace std;

int main(){
    int n, temp;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        cout << temp;
        if(temp % 2 == 0) cout << " is even\n";
        else cout << " is odd\n";
    }
}