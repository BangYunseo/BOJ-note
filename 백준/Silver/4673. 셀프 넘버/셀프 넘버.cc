#include <iostream>
#include <string>

using namespace std;

int main(){
    int arr[10001] = {0, };
    string word;
    for(int i = 1; i < 10001; i++){
        int temp = 0;
        word = to_string(i);
        if(word.length() == 1) 
            temp = i * 2;
        else if(word.length() == 2) 
            temp = (word[0] - '0') + (word[1] - '0') + i;
        else if(word.length() == 3) 
            temp = (word[0] - '0') + (word[1] - '0') + (word[2] - '0') + i;
        else if(word.length() == 4)
            temp = (word[0] - '0') + (word[1] - '0') + (word[2] - '0') + (word[3] - '0') + i;
        if(temp < 10001) arr[temp]++;
    }
    for(int i = 1; i < 10001; i++){
        if(arr[i] == 0) cout << i << endl;
    }
}