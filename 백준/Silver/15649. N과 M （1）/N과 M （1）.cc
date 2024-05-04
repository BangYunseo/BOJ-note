#include <iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX] = {0, };
bool visited[MAX] = {0, };

void dfs(int num){
    if(num == M){
        for(int i = 0; i < M; i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[num] = i;
            dfs(num + 1);
            visited[i] = false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    dfs(0);
}