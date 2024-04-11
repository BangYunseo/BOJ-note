#include <iostream>
#include <string>

using namespace std;

string S;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);    
    cout.tie(NULL);
    getline(cin, S);
    for(int i = 0; i < S.length(); i++){
        if(S[i] >= 'a' && S[i] <= 'z'){
            S[i] += 13;
            if(S[i] > 'z' || S[i] < 'a')
                S[i] -= 26;
        }
        else if(S[i] >= 'A' && S[i] <= 'Z'){
            S[i] += 13;
            if(S[i] > 'Z')
                S[i] -= 26;
        }
    }
    cout << S;
}