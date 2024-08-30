#include <iostream>

using namespace std;

int main(){
    string win_lose;
    int win_count = 0;
    for(int i = 0; i < 6; i++){
        cin >> win_lose;
        if(win_lose == "W") win_count++;
    }
    if(win_count >= 5) cout << 1;
    else if(win_count >= 3) cout << 2;
    else if(win_count >= 1) cout << 3;
    else cout << -1;
}