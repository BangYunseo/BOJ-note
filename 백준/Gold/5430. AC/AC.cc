#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, n;
    cin >> T;
    
    string word, order;
    while(T--){
        bool reverse = false, error = false;
        deque<int> dq;
        cin >> order >> n >> word;
        string s = "";
        for(int i = 0; i < word.length(); i++){
            if(isdigit(word[i])) {
                s += word[i];
            }
            else {
                if(!s.empty()){
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        
        for(auto o : order){
            if(o == 'R'){
                if(reverse) reverse = false;
                else reverse = true;
            } else {
                if(dq.empty()){
                    cout << "error\n";
                    error = true;
                    break;
                }
                if(reverse) dq.pop_back();
                else dq.pop_front();
            }
        }
        if(!error) cout << '[';
        
        if(reverse && !dq.empty()){
            for(auto o = dq.rbegin(); o != dq.rend(); o++){
                if(o == dq.rend() - 1) cout << *o;
                else cout << *o << ',';
            }
        } else if(!reverse && !dq.empty()){
            for(auto o = dq.begin(); o != dq.end(); o++){
                if(o == dq.end() - 1) cout << *o;
                else cout << *o << ',';
            }
        }
        
        if(!error) cout << "]\n";
    }
}