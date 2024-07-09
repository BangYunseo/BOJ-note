#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;

    int min = sum / 60;
    int sec = sum % 60;
    cout << min << endl << sec;
}