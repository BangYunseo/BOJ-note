#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    if(N == 1){
        cout << "11\n";
        cout << "A B C D E F G H J L M";
    }
    else if((N >= 2) && (N <= 4)){
        cout << "9\n";
        if(N != 4) cout << "A C E F G H I L M";
        else cout << "A B C E F G H L M";
    }
    else if((N >= 5) && (N <= 10)){
        cout << "8\n";
        if(N != 10) cout << "A C E F G H L M";
        else cout << "A B C F G H L M";
    }
}