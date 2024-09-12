#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    int arr[26] = {0, };
    while(cin >> c){
        if(c >= 'a' && c <= 'z') arr[c - 'a']++;
    }
    int max = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > max) 
            max = arr[i];
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] == max) 
            cout << char(i + 'a');
    }
}
