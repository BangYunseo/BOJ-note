#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, temp;
int main(){
    cin >> N;
    
    vector<int> arr;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(), arr.end());
    cout << (arr[N - 1] - arr[0]);
}