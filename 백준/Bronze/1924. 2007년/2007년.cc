#include <iostream>

using namespace std;

int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int x, y, sumdate = 0;
    cin >> x >> y;
    
    for(int i = 1; i < x; i++) sumdate += day[i - 1];
    sumdate += y;

    if(sumdate % 7 == 1) cout << "MON";
    else if(sumdate % 7 == 2) cout << "TUE";
    else if(sumdate % 7 == 3) cout << "WED";
    else if(sumdate % 7 == 4)cout << "THU";
    else if(sumdate % 7 == 5) cout << "FRI";
    else if(sumdate % 7 == 6) cout << "SAT";
    else cout << "SUN";
}