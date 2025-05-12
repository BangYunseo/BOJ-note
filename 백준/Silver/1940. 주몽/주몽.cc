#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    vector<int> listIn(N);
    
    for(int i = 0; i < N; i++) cin >> listIn[i];

    sort(listIn.begin(), listIn.end());

    int left = 0, right = listIn.size() - 1;
    int count = 0;
    
    while(left < right){
        int sum = listIn[left] + listIn[right];
        if(sum == M){
            count++;
            left++;
            right--;
        } else if(sum < M) {
            left++;
        } else {
            right--;
        }
    }

    cout << count;
    
    return 0;
}