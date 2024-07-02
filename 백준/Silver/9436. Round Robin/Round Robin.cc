#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, T;
    while(true){
        cin >> N;
        if(N == 0) break;
        cin >> T;
        
        vector<int> counts(N, 0);
        vector<int> players(N);
        
        for(int i = 0; i < N; i++) players[i] = i;
        
        int cp = 0;
        while(true){
            for(int i = 0; i <  T; i++) 
                counts[players[(cp + i) % players.size()]]++;
            
            cp = (cp + T - 1) % players.size();
            players.erase(players.begin() + cp);
            
            if(players.size() == 1) cp = 0;
            else cp %= players.size();
            
            bool equal = true;
            for(int i = 1; i < players.size(); i++){
                if(counts[players[i]] != counts[players[0]]){
                    equal = false;
                    break;
                }
            }
            
            if(equal){
                cout << players.size() << ' ' << counts[players[0]] << '\n';
                break;
            }
        }
    }
}