#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N;
string arr[8] = {"000000", "001111", "010011", "011100", 
                 "100110", "101001", "110101", "111010"};
int main(){
    cin >> N;
    
    string word, res("");
    cin >> word;
    
    for(int i = 0; i < N; i++){
        int check = 0;
        
        for(int j = 0; j < 8; j++){
            int count = 0;
            for(int k = 0; k < 6; k++){
                if (word[k] != arr[j][k]){
                    count++;
                    if(count > 1) break;
                }
            }
            
            if(count == 0 || count == 1){
                res += j + 65;
                check = 1;
                break;
            }
        }
        
        if(check == 0) {
            cout << i + 1;
            return 0;
        }
        else word.erase(0, 6);
    }
    cout << res;
}