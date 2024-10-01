#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;

    long long count_1 = 0, count_0 = 0;

    if (word[0] == '0') count_0++;
    else count_1++;
    
    for(int i = 1; i < word.length(); i++){
        if(word[i] != word[i - 1]){
            if(word[i] == '1') count_1++;
            else count_0++;
        }
    }
    if(word.length() == 1) cout << 0;
    else cout << min(count_1, count_0);
}