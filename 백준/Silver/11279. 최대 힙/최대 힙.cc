#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int N;
    cin >> N;
    
    long long int x;
    priority_queue<long long int> q;
    for(int i = 0; i < N; i++){
        cin >> x;
        if(x == 0){
            if(size(q) == 0){
                cout << 0;
            } else if(size(q) != 0){
                cout << q.top();
                q.pop();
            }
            cout << '\n';
        } else if(x != 0){
            q.push(x);
        }
    }
}