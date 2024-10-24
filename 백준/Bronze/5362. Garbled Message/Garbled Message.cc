#include <iostream>
#include <string>

using namespace std;

int main() {
    string replace_str = "th";
    string origin_str = "iiing";
    string word;

    while(getline(cin, word)){
        for(int i = 0; i < word.length(); i++){
            if(word.substr(i, origin_str.length()) == origin_str) 
                word.replace(word.find(origin_str), origin_str.length(), replace_str);
        }
        cout << word << endl;
    }
}