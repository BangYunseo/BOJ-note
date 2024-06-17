#include <iostream>

using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;
    
    int arr[101];
    for(int i = 1; i < X * Y + 1; i++){
        if((i % X == 0) && (i % Y == 0))
            cout << '3';
        else if(i % X == 0)
            cout << '2';
        else if(i % Y == 0)
            cout << '1';
    }
}