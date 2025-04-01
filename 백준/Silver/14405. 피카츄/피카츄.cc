#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string S;
    cin >> S;
    
    int i = 0;
    bool check = false;
    while(i < S.length()){
        if(S.substr(i, 2) == "pi" || S.substr(i, 2) == "ka"){
            i += 2;
            continue;
        }
        else if(S.substr(i, 3) == "chu"){
            i += 3;
            continue;
        } else {
            check = true;
            break;
        }
    }
    if(check) cout << "NO";
    else cout << "YES";
}