#include <iostream>
#include <cstring>

using namespace std;

int T;

int recursion(const char *s, int l, int r, int& num){
    num += 1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, num);
}

int isPalindrome(const char *s, int& num){
    return recursion(s, 0, strlen(s)-1, num);
}

int main(){
    char tempV[1001];
    
    cin >> T;
    while(T--){
        int countV = 0;
        cin >> tempV;
        
        if(isPalindrome(tempV, countV)) cout << 1;
        else cout << 0;
        cout << ' ' << countV << endl;
    }
}