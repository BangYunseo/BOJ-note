#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>

using namespace std;

int T;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> T;
    string word;
    
    while(T--)
    {
        cin >> word;
        
        stack<char> left;
        stack<char> right;
        
        int index = 0;
        for(int i = 0; i < word.length(); i++)
        {
            if(word[i] == '<')
            {
                if(!left.empty())
                {
                    right.push(left.top());
                    left.pop();
                }
            }
            else if(word[i] == '>')
            {
                if(!right.empty())
                {
                    left.push(right.top());
                    right.pop();
                }
            }
            else if(word[i] == '-')
            {
                if(!left.empty())
                {
                    left.pop();
                }
            }
            else
            {
                left.push(word[i]);
            }
        }

        while(!left.empty())
        {
            right.push(left.top());
            left.pop();
        }

        while(!right.empty()){
            cout << right.top();
            right.pop();
        }
        cout << '\n';
    }
}