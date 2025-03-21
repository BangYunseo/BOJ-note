#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, rescount = 0;
vector<int> arr[1001];
bool visited[1001];

void dfs(int a){
    visited[a] = true;
    for(int i = 0; i < arr[a].size(); i++){
        int val = arr[a][i];
        if(!visited[val]) dfs(val);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> T;
    while(T--){
        cin >> N;
        for(int i = 1; i <= N; i++){
            arr[i].clear();
            visited[i] = false;
        }
        
        int temp;
        for(int i = 1; i <= N; i++){
            cin >> temp;
            arr[i].push_back(temp);
        }
        
        int rescount = 0;
        for(int i = 1; i <= N; i++){
            if(!visited[i]){
                dfs(i);
                rescount++;
            }
        }     
        cout << rescount << '\n';
    }
}