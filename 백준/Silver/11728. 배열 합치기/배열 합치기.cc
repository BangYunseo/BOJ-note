#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int N, M, temp;
    cin >> N >> M;
    
    vector<int> arr;
    for(int i = 0; i < N + M; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < size(arr); i++) cout << arr[i] << ' ';
}