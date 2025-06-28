#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int N, M;
vector<int> arr;

int main(){
    cin >> N;
    
    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> M;
    
    sort(arr.begin(), arr.end());
    
    int startP = 0, endP = arr[N - 1];
    int sum;
    
    if(accumulate(arr.begin(), arr.end(), 0) <= M){
        cout << endP;
        return 0;
    }
    
    while(startP <= endP){
        sum = 0;
        int midP = (startP + endP) / 2;
        for(int i = 0; i < N; i++){
            if(arr[i] <= midP){
                sum += arr[i];
            } else {
                sum += midP;
            }
        }
        
        if(sum <= M){
            startP += 1;
        } else {
            endP -= 1;
        }
    }
    
    cout << endP;
    return 0;
}