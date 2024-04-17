#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int N;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    
    stack<int> st;
    queue<int> qe;
    int X, temp;
    for(int i = 0; i < N; i++){
        cin >> X;
        if(X == 1){
            cin >> temp;
            st.push(temp);
        }
        else if(X == 2){
            if(!st.empty()){
                qe.push(st.top());
                st.pop();
            }
            else qe.push(-1);
        }
        else if(X == 3)
            qe.push(st.size());
        else if(X == 4){
            if (!st.empty()) qe.push(0);
            else qe.push(1);
        }
        else if(X == 5){
            if(!st.empty()) qe.push(st.top());
            else qe.push(-1);
        }
    }
    while(!qe.empty()){
        temp = qe.front();
        cout << temp << '\n';
        qe.pop();
    }
}