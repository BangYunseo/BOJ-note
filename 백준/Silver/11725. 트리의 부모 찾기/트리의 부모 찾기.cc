#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int res[100001];
bool visited[100001];
vector<int> arr[100001];

void dfs(int num){
    visited[num] = true;
    for(int i = 0; i < arr[num].size(); i++){
        int next = arr[num][i];
        if(!visited[next]){
            res[next] = num;
            dfs(next);
        }
    }
}

int main(){
    cin >> N;
    
    int temp1, temp2, first = 1;
    for(int i = 0; i < N - 1; i++){
        cin >> temp1 >> temp2;
        arr[temp1].push_back(temp2);
        arr[temp2].push_back(temp1);
    }
    
    dfs(1);
    for(int i = 2; i <= N; i++){
        cout << res[i] << '\n';
    }
}