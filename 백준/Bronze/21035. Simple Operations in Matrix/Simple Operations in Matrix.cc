#include <iostream>
#include <vector>
#include <limits> 

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> arr(N, vector<int>(M));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) 
            cin >> arr[i][j];
    }
    
    int K;
    cin >> K;
    
    for(int i = 0; i < K; i++){
        string doing;
        cin >> doing;
        
        int v1, v2;
        cin >> v1 >> v2;
        
        if(doing == "row"){
            for(int j = 0; j < M; j++){
                arr[v1 - 1][j] += v2;
            }    
        }
        else if(doing == "col"){
            for(int j = 0; j < N; j++){
                arr[j][v1 - 1] += v2;
            }  
        }
    }
    
    int min = numeric_limits<int>::max();
    int max = numeric_limits<int>::min();
    int res = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
            res += arr[i][j];
        }
    }
    
    cout << res << ' ' << min << ' ' << max;
}