#include <iostream>
#include <cstring>

using namespace std;

char star[3072][6144];
int N;

void Star(int a, int b, int n){
    if(n == 3){
        star[a][b] = '*';
        star[a + 1][b - 1] = '*';
        star[a + 2][b - 2] = '*';
        star[a + 2][b - 1] = '*';
        star[a + 2][b] = '*';
        star[a + 2][b + 1] = '*';
        star[a + 2][b + 2] = '*';
        star[a + 1][b + 1] = '*';
    } else {
        Star(a, b, n / 2);
        Star(a + n / 2, b - n / 2, n / 2);
        Star(a + n / 2, b + n / 2, n / 2);
    }
}

int main(){
    cin >> N;
    
    memset(star, ' ', sizeof(star));
    
    Star(0, N - 1, N);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2 * N - 1; j++){
            cout << star[i][j];
        }
        cout << endl;
    }
}