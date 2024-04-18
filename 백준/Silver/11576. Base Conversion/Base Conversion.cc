#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int A, B, m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    stack<int> st;
    cin >> A >> B >> m;

    int temp;
    int dec(0);
    for(int i = 0; i < m; i++){
        cin >> temp;
        if(m == 1 && temp == 0){
            cout << "0\n";
            return 0;
        }
        dec += (temp * (int)pow(A, m - i - 1));
    }
    while(dec != 0){
        st.push(dec % B);
        dec /= B;
    }
    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';
}