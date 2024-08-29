#include <iostream>
#include <string>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        string S, P;
        cin >> S >> P;
        
        int count = 0;
        for(int i = 0; i < S.length(); i++){
            string temp = "";
            if(i + P.length() <= S.length()){
                for(int j = i; j < i + P.length(); j++) temp = temp + S[j];
                if(temp == P) {
                    count++;
                    i = i + P.length() - 1;
                }
                else count++;
            }
            else count++;
        }
        cout << count << endl;
    }
}