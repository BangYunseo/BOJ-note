#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, temp;
    cin >> N;
    
    vector<int> arr;
    
    for(int i = 0; i < N; i++){
        cin >> temp;
        arr.push_back(temp);    
    }
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << '\n';
    }
}