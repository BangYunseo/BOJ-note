#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M, K;
    cin >> N >> M;

    vector<vector<int>> arr1(N, vector<int>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr1[i][j];
        }
    }

    cin >> M >> K;

    vector<vector<int>> arr2(M, vector<int>(K));
    for(int i = 0; i < M; i++){
        for(int j = 0; j < K; j++){
            cin >> arr2[i][j];
        }
    }

    vector<vector<long long>> res_arr(N, vector<long long>(K, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < K; k++){
                res_arr[i][k] += static_cast<long long>(arr1[i][j]) * arr2[j][k]; 
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            cout << res_arr[i][j] << ' ';
        }
        cout << endl;
    }
}