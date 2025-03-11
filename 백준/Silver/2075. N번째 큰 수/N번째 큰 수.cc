#include <iostream>
#include <queue>

using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;

    int temp;
    for(int i = 0; i < N * N; i++){
        cin >> temp;
        q.push(temp);
        if(q.size() > N) q.pop();
    }
    
    cout << q.top();
}