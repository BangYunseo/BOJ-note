#include <iostream>
#include <vector>
#include <stack>
#define MAX 1000000
using namespace std;

int N;
int main(){
    cin.tie(0);
	ios_base::sync_with_stdio(0);
    
    cin >> N;
    
    stack<int> st;
    vector<int> arr(N + 1);
    // N + 1만큼의 벡터 배열 생성
    vector<int> count(MAX + 1, 0);
    // 크기가 MAX + 1이며 그 배열을 모두 0으로 초기화
    vector<int> res(N + 1, -1);
    // 입력받은 N의 크기만큼 -1로 모두 초기화
    // 기본 값이 -1이기 때문에 변화가 없을 경우 -1만을 출력
    
        
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
        count[arr[i]]++;
        // 입력받고 입력받은 수의 길이만큼 1씩 더해줌
    }
    for(int i = 1; i <= N; i++){
        while(!st.empty() && count[arr[st.top()]] < count[arr[i]]){
            // 배열을 순회하는 동안 
            // 조건 1 : 스택 안에 값이 있을 때
            // 조건 2 : 전 배열 요소의 등장 횟수보다 현 배열 요소의 등장 횟수가 더 클 때
            
            res[st.top()] = arr[i];
            st.pop();
            // 스택의 맨 위의 값인 인덱스 값에 arr[i]값 삽입 후 스택 맨 위의 값 제거
        }
        st.push(i);
        // 스택에 값 삽입
    }
    for(int i = 1; i <= N; i++) cout << res[i] << ' ';
    cout << endl;
    
}