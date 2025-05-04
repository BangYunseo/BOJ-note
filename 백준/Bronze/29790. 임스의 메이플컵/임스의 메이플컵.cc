#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, U, L;
    cin >> N >> U >> L;
    
    if(N >= 1000) {
        if(U < 8000 && L < 260) cout << "Good";
        else cout << "Very Good";
    }
    else cout << "Bad";
}