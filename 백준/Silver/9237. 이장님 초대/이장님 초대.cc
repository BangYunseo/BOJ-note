#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<int> arr;

int main(){
    cin >> N;

    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.rbegin(), arr.rend());
    
    int days = 0;
    for(int i = 0; i < N; i++){
        days = max(days, arr[i] + i + 1);
    }
    cout << days + 1;
}