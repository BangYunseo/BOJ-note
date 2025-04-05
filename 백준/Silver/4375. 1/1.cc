#include <iostream>
#include <cstring>

using namespace std;

int mod(string& num, int n){
    int r = 0;
    for(char c : num) { 
        r = (r * 10 + (c - '0')) % n; 
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;

    while(cin >> n){
        string value = "1";
        int len = 1;
        
        while(true){
            if(mod(value, n) == 0){
                cout << len << '\n';
                break;
            }
            else{
                value += "1";
                len++;
            }
        }
    }
}