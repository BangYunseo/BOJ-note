#include <iostream>

using namespace std;

int main(){
    int N, M, a, b, x, y, K, c, d;
    cin >> N >> M;
    
    int arr[N][M] = {0, };
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    cin >> K;
    while(K--){
        int res = 0;
        cin >> a >> b >> x >> y;
        for(int i = a - 1; i < x; i++){
            for(int j = b - 1; j < y; j++){
                res += arr[i][j];
            }
        }
        cout << res << endl;
    }
    
}