#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    
    if(A == B && B == C) cout << "*";
    else if(B == C) cout << "A";
    else if(A == C) cout << "B";
    else if(A == B) cout << "C";
}