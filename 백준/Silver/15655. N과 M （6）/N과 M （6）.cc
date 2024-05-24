#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[9] = {0, };
int res[9];
bool visited[9] = {false, };

void dfs(int num, int count){
    if(num == M){
        for(int i = 0; i < num; i++){
            cout << res[i] << ' ';
        } cout << '\n';
    }
    else{
        for(int i = count; i < N; i++){
            if(!visited[i]){
                visited[i] = true;
                res[num] = arr[i];
                dfs(num + 1, i + 1);
                visited[i] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    dfs(0, 0);
}