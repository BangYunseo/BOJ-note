#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s, t;
    while(cin >> s){
        cin >> t;

        int start = 0, end = s.length();
        for(int i = 0; i < t.length(); i++){
            if(s[start] == t[i]){
                start++;
                continue;
            }
        }

        if(start == end) cout << "Yes";
        else cout << "No";
        cout << '\n';
    }
}