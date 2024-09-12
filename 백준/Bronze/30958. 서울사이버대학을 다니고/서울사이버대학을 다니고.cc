#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, max = 0; 
    cin >> N;
    cin.ignore();
    
    string word;
    getline(cin, word);
    
    int arr[26] = {0, };
    for(int i = 0; i < N; i++){
        if(word[i] >= 'a' && word[i] <= 'z') 
            arr[word[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] > max) 
            max = arr[i];
    }
    cout << max;
}