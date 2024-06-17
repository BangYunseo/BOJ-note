#include <iostream>
#include <string>

using namespace std;

string word = "WelcomeToSMUPC";
int main(){
    int N;
    cin >> N;
    
    while(N > word.length()){
        N -= word.length();
    }
    cout << word[N - 1];
}