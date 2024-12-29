#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    char dic[5] = {'a', 'e', 'i', 'o', 'u'};
    
    while(true){
        cin >> word;

        if(word == "end") break;
        
        bool rule1 = false, rule2 = true, rule3 = true;
        
        for(int i = 0; i < word.length(); i++){
            for(int j = 0; j < 5; j++){
                if(word[i] == dic[j]) 
                    rule1 = true;
            }
        }
        
        int count1 = 0, count2 = 0;

        if(word.length() <= 2) rule2 == true;
        else {
            for(int i = 0; i < word.length(); i++){
                bool check = true;
                for(int j = 0; j < 5; j++){
                    if(word[i] == dic[j]){
                        count1++;
                        count2 = 0;
                        check = false;
                        break;
                    }
                }
                if(check){
                    count2++;
                    count1 = 0;
                } 

                if(count1 >= 3 || count2 >= 3) 
                    rule2 = false;
            }
        }


        for(int i = 1; i < word.length(); i++){
            if(word[i] == word[i - 1] && 
                word[i] != 'e' && word[i] != 'o')
                rule3 = false;
        }
        
        cout << '<' << word << '>' << " is ";
        
        if(rule1 && rule2 && rule3) cout << "acceptable.";
        else cout << "not acceptable.";
        
        cout << endl;
    }
}