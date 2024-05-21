#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[9] = {0, };
bool visited[9] = {false, };

void dfs(int num, int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << ' ';
        } cout << '\n'; return;
    }
    for(int i = num; i <= N; i++){
        visited[i] = true;
        arr[cnt] = i;
        dfs(i, cnt + 1);
        visited[i] = false;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    dfs(1, 0);
}