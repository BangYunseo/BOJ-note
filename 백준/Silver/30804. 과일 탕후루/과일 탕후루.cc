#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, types, cnt[10], res;
queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    while(N--){
        int fruit;
        cin >> fruit;
        
        q.push(fruit);
        
        if(cnt[fruit]++ == 0) ++types;
        
        while(types > 2){
            fruit = q.front();
            q.pop();
            if(--cnt[fruit] == 0) --types;
        }
        res = max(res, static_cast<int>(q.size()));
    }
    cout << res;
    return 0;
}