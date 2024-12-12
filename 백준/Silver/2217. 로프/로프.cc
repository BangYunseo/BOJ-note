#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, temp;
vector<int> arr;

bool compare(int a, int b){
    return b < a;
}
int main(){
    cin >> N; 
    for(int i = 0; i < N; i++){
        cin >> temp;
        arr.push_back(temp);
    }    
    sort(arr.begin(), arr.end(), compare);
    int res = arr[0], index = 2;
    
    while(N--){
        res = max(res, arr[index - 1] * index);
        index++;
    }
    cout << res;
}