#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<pair<int, int>> arr;
    
    int temp1, temp2;
    for(int i = 0; i < N; i++){
        cin >> temp2 >> temp1;
        arr.push_back(make_pair(temp1, temp2));
    }
    
    sort(arr.begin(), arr.end());
    
    int count = 1;
    int start = arr[0].first;

    for(int i = 1; i < N; i++){
        if(arr[i].second >= start) {
            count++;
            start = arr[i].first;
        }
    }
    cout << count;
}

// 다음에 다시 풀 때 생각해야 하는 부분 : 왜 temp2를 먼저 입력으로 받았는가? 정리