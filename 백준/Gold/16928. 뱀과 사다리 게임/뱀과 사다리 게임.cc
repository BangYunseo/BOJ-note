#include <iostream>
#include <queue>

using namespace std;
int N, M;
int map[101] = {0};
bool visited[101] = {false};

void go_up(int a, int b){
    queue<pair<int, int>> arr;
    arr.push(make_pair(a, b));
    
    while(!arr.empty()){
        int now = arr.front().first;
        int count = arr.front().second;
        arr.pop();
        
        for(int i = 1; i <= 6; i++){
            int nx = now + i;
            if(nx == 100){
                cout << count + 1;
                return;
            } else if(nx < 100){
                while(map[nx] != 0) nx = map[nx];
                if(!visited[nx]){
                    arr.push(make_pair(nx, count + 1));
                    visited[nx] = true;
                }
            }
        }
    }
}

int main(){
    cin >> N >> M;

    int temp1, temp2;
    for(int i = 0; i < N + M; i++){
        cin >> temp1 >> temp2;
        map[temp1] = temp2;
    }
    go_up(1, 0);
}