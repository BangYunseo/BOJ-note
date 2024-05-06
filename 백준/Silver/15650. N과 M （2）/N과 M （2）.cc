#include <iostream>
#define MAX 9

using namespace std;

int N, M;
int arr[MAX] = {0, };
bool visited[MAX] = {0, };

void dfs(int num, int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int a = num; a <= N; a++){
        if(!visited[a]){
            visited[a] = true;
            arr[cnt] = a;
            dfs(a + 1, cnt + 1);
            visited[a] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    dfs(1, 0);
}