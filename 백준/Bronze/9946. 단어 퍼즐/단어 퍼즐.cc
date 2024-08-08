#include <iostream>
#include <string>

using namespace std;

int main(){
    string word1, word2;
    int count = 1;
    while(true){
        bool check = true;
        cin >> word1 >> word2;
        int arr_word1[26] = {0, };
        int arr_word2[26] = {0, };
        if((word1 == "END") && (word2 == "END")){
            break;
        }

        for(int i = 0; i < word1.length(); i++){
            arr_word1[word1[i] - 'a']++;
        }
        
        for(int i = 0; i < word2.length(); i++){
            arr_word2[word2[i] - 'a']++;
        }
        
        for(int i = 0; i < 26; i++){
            if(arr_word1[i] != arr_word2[i]){
                check = false;
            }
        }
        cout << "Case " << count << ":";
        if(check) cout << " same\n";
        else cout << " different\n";
        count++;
    }
}