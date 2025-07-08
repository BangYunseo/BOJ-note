#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word, bombWord;
    cin >> word >> bombWord;
    
    vector<char> s;
    
    for(int i = 0; i < word.length(); i++)
    {
        s.push_back(word[i]);
        
        if(s.size() >= bombWord.length())
        {
            bool check = true;
            for(int j = 0; j < bombWord.length(); j++)
            {
                // 폭발 문자열과 다를 경우
                if(s[s.size() - bombWord.length() + j] != bombWord[j])
                {
                    check = false;
                    break;
                }
            }

            if(check)
            {
                for(int k = 0; k < bombWord.length(); k++)
                {
                    s.pop_back();
                }
            }
        }
    }
    
    if(s.empty()) cout << "FRULA";
    else {
        for(char c : s)
            cout << c;
    }
    
    return 0;
}