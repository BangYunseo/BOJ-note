#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int V;
vector<pair<int, int>> tree[100001];
bool visited[100001];
int maxnode, maxdis = 0;

void dfs(int k, int dis){
    if(visited[k] == true) return;

    if(maxdis < dis){
        maxdis = dis;
        maxnode = k;
    }

    visited[k] = true;
    
    for(int i = 0; i < tree[k].size(); i++){
        int mk = tree[k][i].first;
        int md = tree[k][i].second;
        dfs(mk, md + dis);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V;

    int start, nd = 0, vl = 0;
    while(V--){
        cin >> start;
        while(true){
            cin >> nd;
            if(nd == -1) 
                break;
            else {
                cin >> vl;
                tree[start].push_back({nd, vl});
                tree[nd].push_back({start, vl});
            }
        }
    }

    dfs(1, 0);
    memset(visited, false, sizeof(visited)); 
    maxdis = 0;
    dfs(maxnode, 0);
    cout << maxdis;
        
    return 0;
}