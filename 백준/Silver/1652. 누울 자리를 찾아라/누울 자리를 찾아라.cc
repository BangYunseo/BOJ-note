#include <iostream>

using namespace std;

char room[101][101];

int main(){
    int N;
    cin >> N;
    
    int row = 0, col = 0;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> room[i][j];
        }
    }
    
    int count;
    
    for(int i = 1; i <= N; i++){
        count = 0;
        for(int j = 1; j <= N; j++){
            if(room[i][j] == '.') count++;
            else {
                if(count >= 2) row++;
                count = 0;
            }
        }
        if(count >= 2) row++;
    }

    for(int i = 1; i <= N; i++){
        count = 0;
        for(int j = 1; j <= N; j++){
            if(room[j][i] == '.') count++;
            else {
                if(count >= 2) col++;
                count = 0;
            }
        }
        if(count >= 2) col++;
    }
    
    cout << row << ' ' << col;
    
}