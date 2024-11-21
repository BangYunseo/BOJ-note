#include <iostream>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

struct compare{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)) return a > b;
        // 오름차순
        else return abs(a) > abs(b);
    }
};

int N;
priority_queue<int, vector<int>, compare> arr;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    int temp;
    while(N--){
        cin >> temp;
        if(temp != 0) arr.push(temp);
        else {
            if(arr.size() == 0) cout << "0\n";
            else {
                cout << arr.top() << '\n';
                arr.pop();
            }
        }
    }
}