#include <iostream>
#include <deque>

using namespace std;

int N, M;
deque<int> q;

int main(){
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++) q.push_back(i);
    
    int temp, index, count = 0;
    while(M--){
        cin >> temp;
        
        for(int i = 0; i < N; i++){
            if(q[i] == temp){
                index = i;
                break;
            }
        }
        
        while(true){
            if(q.front() == temp){
                q.pop_front();
                break;
            } else {
                count++;
                if(index < q.size() - index){
                    q.push_back(q.front());
                    q.pop_front();
                } else {
                    q.push_front(q.back());
                    q.pop_back();
                }
            }
            
            if(q.size() == 0) break;
        }
    }
    
    cout << count;
    
    return 0;
}