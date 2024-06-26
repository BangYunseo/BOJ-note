#include <iostream>
#include <queue>

using namespace std;

int N, K;
bool visited[100001];

void bfs(int num){
    queue<pair<int, int>> q;
    q.push(make_pair(num, 0));

    while(!q.empty()){
        int n = q.front().first;
        int m = q.front().second;
        q.pop();

        if(n == K){
            cout << m;
            break;
        }

        if(n + 1 >= 0 && n + 1 < 100001){
            if(!visited[n + 1]){
                visited[n + 1] = true;
                q.push(make_pair(n + 1, m + 1));
            }
        }
        if(n - 1 >= 0 && n - 1 < 100001){
            if(!visited[n - 1]){
                visited[n - 1] = true;
                q.push(make_pair(n - 1, m + 1));
            }
        }
        if(n * 2 >= 0 && n * 2 < 100001){
            if(!visited[n * 2]){
                visited[n * 2] = true;
                q.push(make_pair(n * 2, m + 1));
            }
        }
        
    }
}
int main(){
    cin >> N >> K;
    visited[N] = true;
    bfs(N);
}