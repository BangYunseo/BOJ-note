#include <iostream>
#include <queue>

using namespace std;

int main(){
    int T;
    cin >> T;
    int N, M, imp;
    int count = 0;
    for(int i = 0; i < T; i++){
        count = 0;
        cin >> N >> M;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for(int j = 0; j < N; j++){
            cin >> imp;
            q.push({j, imp});
            pq.push(imp);
        }
        while(!q.empty()){
            int val = q.front().first;
            int valImp = q.front().second;
            q.pop();
            if(pq.top() == valImp){
                pq.pop();
                count += 1;
                if (val == M){
                    cout << count << endl;
                    break;
                }
            }
            else
                q.push({val, valImp});
        }
    }
}