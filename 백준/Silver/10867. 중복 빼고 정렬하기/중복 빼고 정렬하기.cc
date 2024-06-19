#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


int main(){
    int N;
    cin >> N;
    
    vector<int> arr(N);
    
    int temp = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < N; i++){
        if(temp == arr[i]) continue;
        cout << arr[i] << " ";
        temp = arr[i];
    }
}