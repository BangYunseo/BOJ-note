#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    string answer;
    int len = word.length();
    for(int i = 1; i <= len - 2; i++){
        for(int j = 1; j <= len - i - 1; j++){
            string a = word.substr(0, i);
            string b = word.substr(i, j);
            string c = word.substr(i+j);
            
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());
            
            string ret = a + b + c;
            if(answer == "") answer = ret;
            else if(answer > ret) answer = ret;
        }
    }
    
    cout << answer << endl;
}