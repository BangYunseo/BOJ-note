#include <iostream>
#include <algorithm>

using namespace std;

int arr[8];
int res[8];
int N, M;

void dfs(int index){
    if(index == M){
        for(int i = 0; i < M; i++) cout << arr[res[i]] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 0; i < N; i++){
        res[index] = i;
        dfs(index + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);

    dfs(0); return 0;
}