#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, temp, count = 0;
    cin >> N; 
    
    priority_queue<int> q;
    
    int goal;
    cin >> goal;
    
    for(int i = 0; i < N - 1; i++){ 
        cin >> temp;
        q.push(temp);
    }
    
    bool check = false;
    while(!q.empty()){
        if(q.top() < goal) q.pop();
        else if(q.top() >= goal){
            q.push((q.top() - 1));
            q.pop();
            goal++;
            count++;
        }
    }
    cout << count;
}