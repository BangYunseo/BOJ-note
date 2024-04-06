#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int N;
int arr[1000001];
int res[1000001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    stack<int> st;
    
    for(int i = 0; i < N; i++) cin >> arr[i];
    
    for(int i = 0; i < N; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            res[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        res[st.top()] = -1;
        st.pop();
    }
    for(int k = 0; k < N; k++) cout << res[k] << ' ';
    
}