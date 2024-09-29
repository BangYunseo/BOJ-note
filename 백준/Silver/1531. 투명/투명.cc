#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    int x_left, x_right, y_left, y_right;
    int arr[101][101] = {0, };
    for(int i = 0; i < N; i++){
        cin >> x_left >> y_left >> x_right >> y_right;
        for(int j = x_left; j <= x_right; j++){
            for(int h = y_left; h <= y_right; h++){
                arr[j][h]++;
            }
        }
    }
    
    int res_count = 0;
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            if(arr[i][j] > M) res_count++;
        }
    }
    cout << res_count;
}