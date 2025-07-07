#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int V, E, res = 0;
vector<pair<int, pair<int, int>>> tree; 
int parent[10001];

int searchParent(int a){
    if(parent[a] == a)
    {
        return a;
    }
    return parent[a] = searchParent(parent[a]);
}

void unionParent(int a, int b){
    a = searchParent(a);
    b = searchParent(b);
    parent[b] = a;
}

bool checkParent(int a, int b){
    a = searchParent(a);
    b = searchParent(b);
    
    if(a == b) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> V >> E;
    
    int A, B, C;
    for(int i = 0; i < E; i++)
    {
        cin >> A >> B >> C;
        tree.push_back({C, {A, B}});
    }
    
    sort(tree.begin(), tree.end());
    
    for(int i = 1; i <= V; i++)
    {
        parent[i] = i;
    }
    
    int count = 0;
    
    for(int i = 0; i < tree.size(); i++)
    {
        if(!checkParent(tree[i].second.first, tree[i].second.second))
        {
            unionParent(tree[i].second.first, tree[i].second.second);
            res += tree[i].first;
        }
    }
    
    cout << res;
}