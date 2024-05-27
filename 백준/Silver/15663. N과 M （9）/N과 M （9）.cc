#include <iostream>
#include <algorithm>
#define MAX 9

using namespace std;

int N, M;
int arr[MAX] = {0, };
int res[MAX];
bool visited[MAX] = {false, };

void dfs(int num){
    if(num == M){
        for(int i = 0; i < M; i++){
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int temp = 0;
    for(int i = 0; i < N; i++){
        if((!visited[i]) && (arr[i] != temp)){
            res[num] = arr[i];
            temp = res[num];
            visited[i] = true;
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
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr + N);
    dfs(0);
}