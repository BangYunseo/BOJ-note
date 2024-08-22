#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int p, c, temp;
    cin >> p;
    
    vector<pair<int, char>> cards;
    
    for(int i = 0; i < p; i++){
        cin >> c;
        char character = 'A' + i;

        for(int j = 0; j < c; j++){
            cin >> temp;
            cards.push_back({temp, character});
        }
    }
    sort(cards.begin(), cards.end());

    for(int i = 0; i < cards.size(); i++) cout << cards[i].second;
}