#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K;
vector<int> arr;
int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        if(N % i == 0)
            arr.push_back(i);
    }
    sort(arr.begin(), arr.end());
    while(K != 1){
        if(arr.empty())
            break;
        arr.erase(arr.begin());
        K--;
    }
    if(arr.empty())
        cout << 0;
    else
        cout << arr[0];
}