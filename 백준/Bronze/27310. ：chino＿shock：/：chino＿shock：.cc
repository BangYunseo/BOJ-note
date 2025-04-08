#include <iostream>
#include <string>

using namespace std;

string emoji;
int main(){
    cin >> emoji;
    
    int under = 0, colon = 1;
    for(int i = 6; i < emoji.length(); i++){
        if(emoji[i] == ':') 
            colon++;
        else if(emoji[i] == '_') 
            under++;
    }
    cout << (emoji.length() + colon + (under * 5));
}