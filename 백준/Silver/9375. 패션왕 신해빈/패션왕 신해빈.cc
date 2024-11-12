#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    int temp;
    for(int i = 0; i < T; i++){
        cin >> temp;
        string name, type;
        map<string, int> arr;
        while(temp--){
            cin >> name >> type;
            arr[type]++;
        }
        int sum = 1;
        for(auto temp : arr) sum *= temp.second + 1;
        cout << sum - 1 << '\n';
    }
}