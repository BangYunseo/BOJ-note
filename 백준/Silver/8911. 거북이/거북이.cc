#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int T;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 0 : 동 
// 1 : 북 
// 2 : 서  
// 3 : 남

int main(){
    cin >> T; 
    string loc;
    
    while(T--){
        cin >> loc;
        int x = 0, y = 0;
        int maxX = 0, maxY = 0, minX = 0, minY = 0;
        int dir = 0;

        for(int i = 0; i < loc.length(); i++){
            if(loc[i] == 'F'){
                x += dx[dir];
                y += dy[dir];
            } else if(loc[i] == 'B'){
                x -= dx[dir];
                y -= dy[dir];
            } else if(loc[i] == 'L'){
                dir = (dir + 1) % 4;
            } else if(loc[i] == 'R'){
                dir = (dir + 3) % 4;
            }
            minX = min(x, minX);
            maxX = max(x, maxX);
            minY = min(y, minY);
            maxY = max(y, maxY);
        }
        cout << (maxX - minX) * (maxY - minY) << '\n';
    }
}