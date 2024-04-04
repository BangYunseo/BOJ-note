#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

queue<int> arr;
queue<int> resarr;
int N, K;
int main() {
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        arr.push(i);
    }
    while(!arr.empty()){
        for(int j = 0; j < K - 1; j++){
            arr.push(arr.front());
            arr.pop();
        }
        resarr.push(arr.front());
        arr.pop();
    }
    cout << "<";
    for(int a = 0; a < N - 1; a++){
        int temp = resarr.front();
        resarr.pop();
        cout << temp << ", ";
    }
    int lastval = resarr.front();
    resarr.pop();
    cout << lastval << ">";
}