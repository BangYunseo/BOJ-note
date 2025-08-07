#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    for(int i = 0; i < word.length(); i++)
    {
        int res = word[i] - 3;
        if(res < 65) res += 26;
        cout << (char)(res);
    }
}