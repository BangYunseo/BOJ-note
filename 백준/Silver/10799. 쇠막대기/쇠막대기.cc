#include <iostream>
#include <stack>

using namespace std;

stack<char> st;
int main(){
    string word;
    cin >> word;

    int count = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] == '('){
            st.push(word[i]);
        } else{
            if(word[i - 1] == '('){
                st.pop();
                count += st.size();
            }
            else if(word[i - 1] == ')'){
                st.pop();
                count++;
            }
        }
    }
    cout << count;
}