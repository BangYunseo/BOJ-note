#include <iostream>

using namespace std;

int main(){
    int R, G, B;
    cin >> R >> G >> B;
    
    int price = (R * 3) + (G * 4) + (B * 5);
    cout << price;
}