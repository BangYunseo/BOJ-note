#include <iostream>
#include <queue>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
bool visited[100001];

int N, K;

int main(){
    cin >> N >> K;
    
    q.push(make_pair(0, N));
    
    while(!q.empty()){
        int minute = q.top().first;
        int a = q.top().second;
        q.pop();
        
        visited[a] = true;
        
        if(a == K){
            cout << minute;
            break;
        }
        
        if(a - 1 >= 0 && !visited[a - 1]) 
            q.push(make_pair(minute + 1, a - 1));
        if(a + 1 <= 100000 && !visited[a + 1]) 
            q.push(make_pair(minute + 1, a + 1));
        if(a * 2 <= 100000 && !visited[a * 2]) 
            q.push(make_pair(minute, a * 2));
        
    }
}