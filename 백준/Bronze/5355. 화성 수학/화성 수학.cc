#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int T;
int main(){
    cin >> T;
    float num = 0;
    for(int i = 0; i < T; i++){
        cin >> num;
        cin.ignore();
        
        string word;
        getline(cin, word);
        
        int a = 0;
        while(a < word.length()){
            if(word[a] == '@') 
                num *= 3;
            else if(word[a] == '%') 
                num += 5;
            else if(word[a] == '#') 
                num -= 7;
            a++;
        }
        printf("%.2f\n", num);
    }
}