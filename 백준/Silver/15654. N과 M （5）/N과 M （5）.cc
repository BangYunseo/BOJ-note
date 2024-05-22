#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[9] = {0, };
int res[9];
bool visited[9] = {false, }; 

void dfs(int num, int count){
    if(count == M){
        for(int i = 0; i < M; i++){
            cout << res[i] << ' ';
        }
        cout << '\n';
    }
    else {
        for(int i = 1; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            res[count] = arr[i - 1];
            dfs(i + 1, count + 1);
            visited[i] = false;
            }
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    dfs(1, 0);
}