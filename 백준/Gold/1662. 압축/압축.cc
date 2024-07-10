#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <stack>

using namespace std; 

string word;
int main(){
    cin >> word;
    
    stack<int> arr;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == '('){
            arr.push(-1);
        }
        else if(isalnum(word[i])){
            if((i < word.size() - 1) && (word[i + 1] == '('))
                arr.push(word[i] - '0');
            else 
                arr.push(1);
        }
        else{
            int length = 0;
            while(arr.top() != -1){
                length += arr.top();
                arr.pop();
            }
            arr.pop();
            length *= arr.top(); 
            arr.pop();
            arr.push(length);
        }
    }
    int answer = 0;
    while(!arr.empty()){
        answer += arr.top();
        arr.pop();
    }
    cout << answer;
}