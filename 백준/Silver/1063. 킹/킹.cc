#include <iostream>
#include <cstring>
#include <map>

using namespace std;

pair<int, int> arr(string move){
    map<string, pair<int, int>> location = {
        {"R", {1, 0}}, {"L", {-1, 0}}, {"B", {0, -1}}, {"T", {0, 1}},
        {"RT", {1, 1}}, {"LT", {-1, 1}}, {"RB", {1, -1}}, {"LB", {-1, -1}}
    };
    
    return location[move];
}

bool inRange(int x, int y){
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string locKing, locStone, moveTemp;
    int N;
    cin >> locKing >> locStone >> N;
    
    int kx = locKing[0] - 'A', ky = locKing[1] - '1';
    int sx = locStone[0] - 'A', sy = locStone[1] - '1';
    
    while(N--){
        cin >> moveTemp;
        pair<int, int> trans = arr(moveTemp);
        int nx = kx + trans.first;
        int ny = ky + trans.second;
        
        if(!inRange(nx, ny)) continue;
        
        if(nx == sx && ny == sy){
            int nsx = sx + trans.first;
            int nsy = sy + trans.second;
            if(!inRange(nsx, nsy)) continue;
            sx = nsx;
            sy = nsy;
        }
        kx = nx;
        ky = ny;
    }
    
    cout << char(kx + 'A') << ky + 1<< '\n';
    cout << char(sx + 'A') << sy + 1;
}