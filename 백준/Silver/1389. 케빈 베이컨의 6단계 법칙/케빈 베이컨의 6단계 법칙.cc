#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
vector<int> user[101];
int temp1, temp2;
int count = 0;

void bfs(int a, int b, bool visit[101]){
    queue<pair<int, int>> q;
    q.push(make_pair(a, 0));
    visit[a] = true;
    while(!q.empty()){
        int x = q.front().first;
        int cnt = q.front().second;
        
        q.pop();
        
        if(x == b){
            count = cnt;
            break;
        }
        
        for(int i = 0; i < user[x].size(); i++){
            if(!visit[user[x][i]]){
                q.push(make_pair(user[x][i], cnt + 1));
                visit[user[x][i]] = true;
            }
        }
    }
}
int main(){
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> temp1 >> temp2;
        user[temp1].push_back(temp2);
        user[temp2].push_back(temp1);
        // 사람 관계는 양방향 설정
    }
    
    int res = 98765432;
    int num;
    for(int i = 1; i <= N; i++){
        int temp = 0;
        for(int j = 1; j <= N; j++){
            bool visit[102] = {0};
            if(i == j) continue;
            bfs(i, j, visit);
            temp += count;
            count = 0;
        }
        if(res > temp){
            res = temp;
            num = i;
        }
    }
    cout << num;
}