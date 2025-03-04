#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int n, res = 0, last = 0;
vector<pair<int, int>> q[10001];
bool visited[10001];

void dfs(int k, int d){
    if(visited[k]) return;

    visited[k] = true;
    if(res < d){
        res = d;
        last = k;
    }

    for(int i = 0; i < q[k].size(); i++){
        dfs(q[k][i].first, d + q[k][i].second);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    int rt, nd, v;
    for(int i = 0; i < n - 1; i++){
        cin >> rt >> nd >> v;
        q[rt].push_back({nd, v});
        q[nd].push_back({rt, v});
    }

    dfs(1, 0);
    res = 0;
    memset(visited, false, sizeof(visited));

    dfs(last, 0);
    cout << res;
    
    return 0;
}