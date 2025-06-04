#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> 

using namespace std;

int L, C;
vector<char> alpha;
vector<string> res;

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
}


void backT(int index, int cnt, string curPass, int vowel, int cons){
    // 조건 1 : L 개의 문자를 모두 선택한 경우
    if(cnt == L){
        // 조건 2 : 모음 1개, 자음 2개 이상을 선택한 경우
        if(vowel >= 1 && cons >= 2){
            res.push_back(curPass);
        }
        return;
    }

    // 조건 3 : 모든 문자에서 L개의 문자를 채우지 못한 경우
    if(index == C){
        return;
    }

    // 가지치기 : 남은 문자로 L개를 채울 수 없는 경우
    if(cnt + (C - index) < L){
        return ;
    }

    // 현재 문자 선택
    char curChar = alpha[index];
    if(isVowel(curChar)){
        backT(index + 1, cnt + 1, curPass + curChar, vowel + 1, cons);
    } else {
        backT(index + 1, cnt + 1, curPass + curChar, vowel, cons + 1);
    }

    // 현재 문자 선택 X 
    backT(index + 1, cnt, curPass, vowel, cons);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> L >> C;

    alpha.resize(C);
    for(int i = 0; i < C; i++)
        cin >> alpha[i];
    
    sort(alpha.begin(), alpha.end());
    
    backT(0, 0, "", 0, 0);
    
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << '\n';
}