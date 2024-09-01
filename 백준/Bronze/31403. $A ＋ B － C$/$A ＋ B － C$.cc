#include <iostream>

using namespace std;

string A, B, C;
int main(){
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - stoi(C) << endl << stoi(A + B) - stoi(C);
}