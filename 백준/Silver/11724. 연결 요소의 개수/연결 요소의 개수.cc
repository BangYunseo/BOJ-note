#include <iostream>
#include <vector>

using namespace std;

vector<int> vect[1001];    // 인접 리스트
int visited[1001];        // 방문 기록
int N, M;

void DFS(int num){
    visited[num] = 1;
    for(int i = 0; i < vect[num].size(); i++){
        int index = vect[num][i];
        if(visited[index] == 0) DFS(index);
    }
}
int main(){
    cin >> N >> M;
    
    int u, v, count = 0;
    for(int i = 0; i < M; i++){
        cin >> u >> v;
        vect[u].push_back(v);
        vect[v].push_back(u);
    }
    
    for(int i = 1; i <= N; i++){
        // 빠짐 없는 탐색
        if(visited[i] == 0){
            count++;
            DFS(i);
        }
    }
    
    cout << count << endl;
}