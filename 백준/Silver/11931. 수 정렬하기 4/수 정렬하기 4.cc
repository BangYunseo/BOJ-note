#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> arr;
    cin >> N;
    
    int temp;
    int first = N, end = N;
    while(first--){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    
    while(end--){
        cout << arr.back() << '\n';
        arr.pop_back();
    }
}