#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
char game;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> game;
    
    string word;
    vector<string> list;
    
    while(N--){
        cin >> word;
        list.push_back(word);
    }
    
    sort(list.begin(), list.end());
    list.erase(unique(list.begin(), list.end()), list.end());
    
    if(game == 'Y') cout << list.size();
    else if(game == 'F') cout << (list.size() / 2);
    else cout << (list.size() / 3);
}