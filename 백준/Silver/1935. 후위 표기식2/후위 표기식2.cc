#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int N;
string word;
// N값과 스택에 삽입할 문자열
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> word;
    // 입력
    double arr[26] = {0, };
    // 1부터 26까지 피연산자의 개수를 입력받을 수 있는 배열
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    stack<double> st;
    // double형 스택
    
    for(int i = 0; i < word.size(); i++){// word의 길이만큼 반복
        if (word[i] >= 'A' && word[i] <= 'Z'){// word[i]의 값이 알파벳인 경우
            st.push(arr[word[i] - 'A']);
            // double형의 인덱스 값을 넣어줌
        }
        else if(!st.empty()){ // 스택이 비어있지 않았다면 출력
            double temp = st.top();
            st.pop();
            // 스택의 top()을 temp 변수에 저장한 후 pop()
            // 아래는 모두 사칙연산
            if(word[i] == '+'){
                temp = st.top() + temp;
            }
            else if(word[i] == '-'){
                temp = st.top() - temp;
            }
            else if(word[i] == '/'){
                temp = st.top() / temp;
            }
            else if(word[i] == '*'){
                temp = st.top() * temp;
            }
            st.pop();
            st.push(temp);
            // 스택의 값을 하나 더 지움(2개의 정수로 연산이 진행됐기 때문)
            // 그리고 temp 값을 스택에 삽입
        }
    }
    cout << fixed;
    cout.precision(2);
    // 소숫점 2자리까지 출력
    cout << st.top() << endl;
    // 스택의 맨 위의 값(결과값) 출력
}