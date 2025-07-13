#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool compare(const pair<long long, int>& a, const pair<long long, int>& b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    cin >> N;
    map<long long, int> m;
    
    long long temp;
    while(N--)
    {
        cin >> temp;
        m[temp]++;
    }
    
    vector<pair<long long, int>> cardList(m.begin(), m.end());
    sort(cardList.begin(), cardList.end(), compare);
    
    cout << cardList[0].first;
}