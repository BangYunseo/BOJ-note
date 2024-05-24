#include <iostream>

using namespace std;

int N, count = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> word;
        bool flag = true;
        for(int j = 0; j < word.length(); j++){
            for(int k = 0; k < j; k++){
                if((word[j] != word[j - 1]) && (word[j] == word[k])){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) count++;
    }
    cout << count;
}