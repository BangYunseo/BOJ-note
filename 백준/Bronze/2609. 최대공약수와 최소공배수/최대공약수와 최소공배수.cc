#include <iostream>

using namespace std;

int GCD(int a, int b){
    if(b != 0){
        int temp1 = b;
        int temp2 = a % b;
        return GCD(temp1, temp2);
    }else{
        return a;
    }
}

int main(){
    int A, B;
    cin >> A >> B;
    int res = GCD(A, B);
    cout << res << endl << ((A * B) / res);
}