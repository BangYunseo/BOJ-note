#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, X, Y, x, y;
    cin >> M;
    
    int location[3] = {1, 2, 3};
    while(M--){
        cin >> X >> Y;

        int x_idx = -1, y_idx = -1;
        for(int i = 0; i < 3; i++){
            if(location[i] == X) x_idx = i;
            if(location[i] == Y) y_idx = i;
        }

        if(x_idx != -1 && y_idx != -1) 
            swap(location[x_idx], location[y_idx]);
    }
    cout << location[0];
}