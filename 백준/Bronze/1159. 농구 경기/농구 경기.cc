#include <iostream>
#include <cstring>

using namespace std;

int N;
int alpha[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    string playerName;
    for(int i = 0; i < N; i++){
        cin >> playerName;
        alpha[playerName[0] - 'a']++; 
    }
    
    bool check = false;
    string resSum = "";
    for(int i = 0; i < 26; i++){
        if(alpha[i] >= 5){
            check = true;
            resSum += i + 'a';
        }
    }
    
    if(!check) cout << "PREDAJA";
    else cout << resSum;
}