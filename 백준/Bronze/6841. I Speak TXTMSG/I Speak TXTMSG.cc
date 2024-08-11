#include <iostream>

using namespace std;

int main(){
    string word;
    while(cin >> word){
        
        if(word == "CU") 
            cout << "see you";
        else if(word == ":-)") 
            cout << "I’m happy";
        else if(word == ":-(") 
            cout << "I’m unhappy";
        else if(word == ";-)") 
            cout << "wink";
        else if(word == ":-P") 
            cout << "stick out my tongue";
        else if(word == "(~.~)") 
            cout << "sleepy";
        else if(word == "TA") 
            cout << "totally awesome";
        else if(word == "CCC") 
            cout << "Canadian Computing Competition";
        else if(word == "CUZ") 
            cout << "because";
        else if(word == "TY") 
            cout << "thank-you";
        else if(word == "YW") 
            cout << "you’re welcome";
        else if(word == "TTYL") 
            cout << "talk to you later";
        else 
            cout << word;
        
        cout << endl;
    }
}