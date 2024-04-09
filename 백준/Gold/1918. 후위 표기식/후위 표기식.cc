#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> st;
string word;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> word;
    
    for(int i = 0; i < word.length(); i++){ // 입력받은 식의 길이만큼 반복
        if(word[i] >= 'A' && word[i] <= 'Z')
            cout << word[i];
            // 알파벳을 입력받을 경우 그대로 출력
        else{
            if(word[i] == '(')
                st.push(word[i]);
                // 여는 괄호('(') 를 입력받을 경우 그대로 스택에 삽입
            else if(word[i] == '*' || word[i] == '/'){
                // 먼저 계산하는 연산자들
                while(!st.empty() && (st.top() == '*' || st.top() == '/')){
                    // 스택이 비어있지 않으며 맨 위의 값이 곱셈('*') 혹은 나눗셈('/')인 경우
                    cout << st.top();
                    st.pop();
                }
                st.push(word[i]);
            }
            else if(word[i] == '+' || word[i] == '-'){
                // 나중에 곱셈과 나눗셈보다 뒤의 연산하는 연산자들
                while(!st.empty() && st.top() != '('){
                    // 스택이 비어있지 않으며 맨 위의 값이 '('이 아닐 때까지 반복
                    cout << st.top();
                    st.pop();
                }
                st.push(word[i]);
            }
            else if(word[i] == ')'){
                // ')'가 입력된 경우
                while(!st.empty() && st.top() != '('){
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
        }
    }
    while(!st.empty()){
        // 스택이 빌 때까지 값 출력
        cout << st.top();
        st.pop();
    }
}