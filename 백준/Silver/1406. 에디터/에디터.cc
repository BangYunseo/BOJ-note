#include <iostream>
#include <string>
#include <stack>

using namespace std;

int N;
// 명령어 횟수

int main(){
    string word;
    cin >> word;
    // 단어 입력
    
    cin >> N;
    // 반복할 횟수
    
    stack<char> left;
    // 왼쪽 스택
    
    stack<char> right;
    // 오른쪽 스택
    for(int i = 0; i < (int)word.size(); i++) left.push(word[i]);
    // 입력받은 word의 길이만큼 left 스택에 단어 글자마다 push
    
    for(int i = 0; i < N; i++){
        char choice, temp;
        cin >> choice;
        if(choice == 'P'){// P가 입력된 경우
            cin >> temp;
            left.push(temp);
        }
        else if(choice == 'L'){// L이 입력된 경우
            if(!left.empty()){// 만약 left 배열이 비어있지 않다면
                right.push(left.top());
                left.pop();
            } 
        }
        else if(choice == 'D'){ // D가 입력된 경우
            if(!right.empty()){// 만약 right 배열이 비어있지 않다면
                left.push(right.top());
                right.pop();
            } 
        }
        else if(choice == 'B'){ // B가 입력된 경우
            if(!left.empty()){// 만약 left 배열이 비어있지 않다면
                left.pop();
            } 
        }
    }
    while(!left.empty()){ // 왼쪽의 값을 모두 오른쪽으로 밀어야됨
        right.push(left.top());
        left.pop();
    }
    // 위와 같은 과정을 통해 왼쪽에서 가장 깊이 삽입된 값이 오른쪽의 첫 번째 값이 됨
    // 즉, 정상적인 순서로 출력 가능
    
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }
}