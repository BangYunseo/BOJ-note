#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    string a, b;
    while(N--)
    {
        cin >> a >> b;
        
        if(a.length() != b.length())
        {
            cout << "Impossible\n";
            continue;
        }
        
        vector<char> list(26, 0);
        for(char c : a)
            list[c - 'a']++;
        
        bool check = true;
        for(char c : b)
        {
            if(list[c - 'a'] > 0) 
                list[c - 'a']--;
            else
            {
                check = false;
                break;
            }
        }
        
        if(check) 
            cout << "Possible\n";
        else 
            cout << "Impossible\n";
    }
    
    return 0;
}