#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[101][101] = {0, };
int res[101][101] = {0, };
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        string a;
        cin >> a;
        for(int j = 0; j < M; j++){
            arr[i][j] = a[j] - '0';
        }
    }
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    res[0][0] = 1;
    while(!q.empty()){
        int n = q.front().first;
        int m = q.front().second;
        q.pop();
        for(int k = 0; k < 4; k++){
            int nx = n + dx[k];
            int my = m + dy[k];
            if(0 <= nx && nx < N && 0 <= my && my < M){
                if(arr[nx][my] == 1 && res[nx][my] == 0){
                    q.push(make_pair(nx, my));
                    res[nx][my] = res[n][m] + 1;
                }
            }
        }
    }
    cout << res[N - 1][M - 1];
}