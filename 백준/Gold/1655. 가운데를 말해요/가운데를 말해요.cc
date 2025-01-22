#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

// 최소힙과 최대힙으로 중앙값 계산하는 방법
// 1. 최대힙의 크기는 최소힙의 크기와 같거나 하나 이상이어야 함
// 2. 최대힙의 최대 원소는 최소힙의 최소 원소와 같거나 작아야 함

using namespace std;

int N, temp;
priority_queue<int> q;
priority_queue<int, vector<int>, greater<int>> mx;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    while(N--){
        cin >> temp;
        if(q.empty()) q.push(temp);
        else if(q.size() == mx.size()) q.push(temp);
        else mx.push(temp);
        
        if(!q.empty() && !mx.empty() && (q.top() > mx.top())){
            int a = q.top();
            int b = mx.top();
            
            q.pop();
            mx.pop();
            
            q.push(b);
            mx.push(a);
        }
        cout << q.top() << '\n';
    }
}