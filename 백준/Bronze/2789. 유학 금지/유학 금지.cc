#include <iostream>

using namespace std;

int main(){
    string str, res = "";
    cin >> str;
    
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'C' || str[i] == 'A' ||
          str[i] == 'M' || str[i] == 'B' ||
          str[i] == 'R' || str[i] == 'I' ||
          str[i] == 'D' || str[i] == 'G' ||
          str[i] == 'E') { continue; }
        res += str[i];
    }
    
    cout << res;
}