#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N, arr[101];
    
    cin >> N;
    vector<int> res(N);
    
    for(int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        res.insert(res.begin() + arr[i], i);  
    }
    
    for(int i = N - 1; i >= 0; i--)
    {
        cout << res[i] << ' ';
    }
}