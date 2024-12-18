#include <iostream>

using namespace std;

int main(){
    string word, res = "";
    cin >> word;
    
    int count = 0;
    bool check = true;
    for(int i = 0; i < word.length(); i++){
        if(word[i] != '.') count++;
        else {
            if(count % 2 != 0){
                check = false;
                break;
            }
            while(count >= 4){
                res += "AAAA";
                count -= 4;
            }
            if(count == 2){
                res += "BB";
                count -= 2;
            }
            res += ".";
            count = 0;
        }
    }

    if(count > 0){
        if(count % 2 != 0) check = false;
        while(count >= 4){
            res += "AAAA";
            count -= 4;
        }
        if(count == 2){
             res += "BB";
            count -= 2;
        }
    }
    
    if(check) cout << res;
    else cout << -1;
}