#include <iostream>
#include <cstring>
#include <string>
#include <queue>

using namespace std;

int a, b;
bool visited[10001];

void bfs(){
    queue<pair<int, string>> q;
    q.push(make_pair(a, ""));
    visited[a] = true;
    
    while(!q.empty()){
        int num = q.front().first;
        string word = q.front().second;
        q.pop();
        
        if(num == b){
            cout << word << '\n';
            return;
        }
        
        int D, S, L, R;
        D = (num * 2) % 10000;
        if(!visited[D]){
            visited[D] = true;
            q.push(make_pair(D, word + "D"));
        }
        
        S = num - 1 < 0 ? 9999 : num - 1;
        if(!visited[S]){
            visited[S] = true;
            q.push(make_pair(S, word + "S"));
        }
        
        L = (num % 1000) * 10 + (num / 1000);
        if(!visited[L]){
            visited[L] = true;
            q.push(make_pair(L, word + "L"));
        }
        
        R = (num / 10) + (num % 10) * 1000;
        if(!visited[R]){
            visited[R] = true;
            q.push(make_pair(R, word + "R"));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        cin >> a >> b;
        memset(visited, false, sizeof(visited));
        bfs();
    }
}