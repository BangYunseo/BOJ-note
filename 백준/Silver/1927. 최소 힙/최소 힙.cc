#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, x;
    cin >> N;
    
    priority_queue<int, vector<int>, greater<int>> myHeap;
    while(N--){
        cin >> x;
        if(x == 0){
            if(myHeap.empty()) cout << 0 << '\n';
            else{
                cout << myHeap.top() << '\n';
                myHeap.pop();
            }
        } 
        else myHeap.push(x);
    }
}