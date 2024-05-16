#include <iostream>

using namespace std;

int GCD(int a, int b){
    int r = a % b;
    while(r != 0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(){
    int A, B;
    cin >> A >> B;
    
    int temp = GCD(A, B);
    cout << temp << endl << A * B / temp; 
}