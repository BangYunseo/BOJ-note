#include <iostream>

using namespace std;

int main(){
    long long int N, a, b, c, d;
    cin >> N;
    
    while(N--){
        cin >> a >> b >> c >> d;
        if(a * b > c * d) cout << "TelecomParisTech\n";
        else if(a * b < c * d) cout << "Eurecom\n";
        else cout << "Tie\n";
    }
}