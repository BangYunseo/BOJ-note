#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<string> board;

void star(int r, int c, int num){
    if(num == 1){
        board[r][c] = '*';
        return;
    }

    int A = num / 3;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (i == 1 && j == 1) {
            } else {
                star(r + i * A, c + j * A, A);
            }
        }
    }
}

int main(){
    int N;
    cin >> N;

    board.resize(N, string(N, ' '));

    star(0, 0, N);
    
    for(int i = 0; i < N; i++){
        cout << board[i] << '\n';
    }
}