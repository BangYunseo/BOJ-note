#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int F, S, G, U, D;

void bfs(int F, int S, int G, int U, int D){
    queue<int> q;
    vector<int> dist(F + 1, -1);
    
    q.push(S);
    dist[S] = 0;
    
    while(!q.empty()){
        int cF = q.front();
        q.pop();
        
        if(cF == G)
        {
            cout << dist[G];
            return ;
        }
        
        int nU = cF + U;
        if(nU <= F && dist[nU] == -1)
        {
            dist[nU] = dist[cF] + 1;
            q.push(nU);
        }
        
        int nD = cF - D;
        if(nD >= 1 && dist[nD] == -1)
        {
            dist[nD] = dist[cF] + 1;
            q.push(nD);
        }
        
    }
    cout << "use the stairs";
}

int main(){
    cin >> F >> S >> G >> U >> D;
    
    bfs(F, S, G, U, D);
    return 0;
}