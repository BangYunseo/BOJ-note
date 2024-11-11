#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    bool check = false;
    string temp = "";
    int res = 0;
    
    for(int i = 0; i <= word.size(); i++){
        if(word[i] == '-' || word[i] == '+' || i == word.size()){
            if(check == true) {
                res -= stoi(temp);
                temp = "";
            } else if(check == false){
                res += stoi(temp);
                temp = "";
            }
        } 
        else temp += word[i];
        
        if(word[i] == '-') check = true;
    }
    cout << res;
}