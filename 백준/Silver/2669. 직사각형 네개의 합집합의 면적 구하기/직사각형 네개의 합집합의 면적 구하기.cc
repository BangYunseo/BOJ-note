#include <iostream>

using namespace std;

bool check[101][101] = {false, };
int main(){
    int x1, y1, x2, y2;
    for(int i = 0; i < 4; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2; j++){
            for(int k = y1; k < y2; k++){
                check[j][k] = true;
            }
        }
    }
    
    int V = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(check[i][j] == true) V++;
        }
    }
    cout << V;
}