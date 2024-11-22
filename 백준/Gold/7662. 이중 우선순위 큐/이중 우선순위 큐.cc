#include <iostream>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

priority_queue<int, vector<int>, greater<int>> heap_min;
priority_queue<int, vector<int>, less<int>> heap_max;
map<int, int> deleted;

void insert(int n){
    heap_min.push(n);
    heap_max.push(n);
    deleted[n]++;
}

void deleteMax(){
    if(!heap_max.empty()){
        deleted[heap_max.top()]--;
        heap_max.pop();
    }
}

void deleteMin(){
    if(!heap_min.empty()){
        deleted[heap_min.top()]--;
        heap_min.pop();
    }
}

void cleanPqs(){
    while(!heap_min.empty() && deleted[heap_min.top()] == 0){
        heap_min.pop();
    }
    while(!heap_max.empty() && deleted[heap_max.top()] == 0){
        heap_max.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, Q;
    cin >> T;

    while (T--) {
        cin >> Q;

        string order;
        long long int n;
        
        while(!heap_min.empty()) heap_min.pop();
        while(!heap_max.empty()) heap_max.pop();
        deleted.clear();
        
        for (int i = 0; i < Q; i++) {
            cin >> order >> n;
               
            if (order == "I") {
                insert(n); 
            } else if (order == "D") {
                if (n == -1) deleteMin();
                else if (n == 1) deleteMax();
                cleanPqs();
            }
        }
        cleanPqs();
        if(heap_max.empty() || heap_min.empty()) cout << "EMPTY\n";
        else cout << heap_max.top() << ' ' << heap_min.top() << '\n';
    }
    
    return 0;
}
