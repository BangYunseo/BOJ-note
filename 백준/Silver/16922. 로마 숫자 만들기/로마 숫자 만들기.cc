#include <iostream>
#include <set>

using namespace std;

int val[4] = {1, 5, 10, 50};
bool visited[21][1001];
set<int> res;

void dfs(int dpt, int N, int sum){
    if(visited[dpt][sum]) return;

    visited[dpt][sum] = true;
    
    if(dpt == N){
        res.insert(sum);
        return ;
    }
    
    for(int i = 0; i < 4; i++)
        dfs(dpt + 1, N, sum + val[i]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    dfs(0, N, 0);
    cout << res.size();

    return 0;
}