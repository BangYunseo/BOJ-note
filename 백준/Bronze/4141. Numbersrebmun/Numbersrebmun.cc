#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int alpha[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
int main(){
    int N;
    cin >> N;

    string word;
    for(int i = 0; i < N; i++){
        cin >> word;
        string call = "";
        for(int j = 0; j < word.length(); j++){
            int temp = 0;
            if((word[j] >= 'A') && (word[j] <= 'Z')){
                temp = word[j] - 'A';
            }
            else if((word[j] >= 'a') && (word[j] <= 'z')){
                temp = word[j] - 'a';
            }
            call += to_string(alpha[temp]);
        }

        string rev_call = call;
        reverse(rev_call.begin(), rev_call.end());
        if(call == rev_call) 
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
}