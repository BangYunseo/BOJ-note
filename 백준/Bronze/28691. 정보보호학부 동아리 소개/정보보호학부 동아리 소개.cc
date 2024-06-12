#include <iostream>

using namespace std;

int main(){
    char word;
    cin >> word;
    
    if(word == 'M'){
        cout << "MatKor";
    }else if(word == 'W'){
        cout << "WiCys";
    }else if(word == 'C'){
        cout << "CyKor";
    }else if(word == 'A'){
        cout << "AlKor";
    }else if(word == '$'){
        cout << "$clear";
    }
}