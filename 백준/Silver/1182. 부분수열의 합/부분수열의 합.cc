#include <iostream>
#include <vector>

using namespace std;

int countV = 0;
int N, S;
vector<int> arr;

void numSum(int num, int curSum){
    if(num == N){
        if(curSum == S){
            countV++;
        } 
        return;
    }
    numSum(num + 1, curSum + arr[num]);  
    numSum(num + 1, curSum);  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> S;

    arr.resize(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    numSum(0, 0);
    if (S == 0) { 
        countV--;
    }
    cout << countV;
}