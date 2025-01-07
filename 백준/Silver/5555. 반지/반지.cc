#include <iostream>
#include <cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word, temp;
    int N, count = 0;
    
    cin >> word >> N;
    
    while(N--){
        cin >> temp;
        temp += temp;
        
        for(int i = 0; i < temp.length(); i++){
            if(temp.substr(i, word.length()) == word){
                count++;
                break;
            }
        }
    }
    
    cout << count;
}