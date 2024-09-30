#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    queue<int> arr;
    for(int i = 1; i <= N; i++) arr.push(i);
    while(arr.empty() != true){
        cout << arr.front() << ' ';
        arr.pop();
        arr.push(arr.front());
        arr.pop();
    }
}