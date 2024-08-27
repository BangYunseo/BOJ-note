#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int p, c, temp;
    cin >> p;
    
    vector<pair<int, char>> arr;
    for(int i = 0; i < p; i++){
        cin >> c;
        char character = 'A' + i;
        for(int j = 0; j < c; j++){
            cin >> temp;
            arr.push_back({temp, character});
        }
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i].second;
    }
}