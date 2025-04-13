#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[21][21];
bool visited[21];
int N, startScore, linkScore, minScore = 1e9;

void dfs(int d, int idx){
    if(d == N / 2){
        startScore = 0, linkScore = 0;
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i == j) continue;
                if(visited[i] && visited[j]) startScore += arr[i][j];
                if(!visited[i] && !visited[j]) linkScore += arr[i][j];
            }
        }
        minScore = min(minScore, abs(startScore - linkScore));
        return;
    }
    for(int i = idx; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            dfs(d + 1, i + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N;
    // 입력받기
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> arr[i][j];
        }
    }
    dfs(0, 1);
    cout << minScore;
}