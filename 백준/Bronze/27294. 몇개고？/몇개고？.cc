#include <iostream>

using namespace std;

int T, S;
int main(){
    cin >> T >> S;
    if((12 <= T) && (T <= 16)){
        if(S == 0)
            cout << "320";
        else 
            cout << "280";
    }
    else{
        cout << "280";
    }
}