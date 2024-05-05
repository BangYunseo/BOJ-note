#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int K;
int main(){
    cin >> K;
    stack<int> arr;
    int temp;
    for(int i = 0; i < K; i++){
        cin >> temp;
        if(temp == 0) arr.pop();
        else arr.push(temp);
    }
    
    int sum = 0;
    
    while(!arr.empty()){
        sum += arr.top(); 
        arr.pop();
    }
    cout << sum;
}