#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <list>

using namespace std;

unordered_set<string> memSet;
unordered_map<string, list<string>::iterator> memMap;
list<string> memList;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int K, L;
    cin >> K >> L;

    string temp;
    for(int i = 0; i < L; i++){
        cin >> temp;

        if(memSet.count(temp)){
            memList.erase(memMap[temp]);        
        }
            
        memSet.insert(temp);
        memList.push_back(temp);
        memMap[temp] = prev(memList.end());
    }

    int cnt = 0;
    for(const auto& val : memList){
        if(cnt++ >= K) break;
        cout << val << '\n';
    }  
    return 0;
}