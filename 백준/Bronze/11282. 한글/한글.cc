#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    string word;
    N += 3071;
    word.push_back(N / 4096 + 234);
    word.push_back(N / 64 % 64 + 128);
    word.push_back(N % 64 + 128);
    
    cout << word;
}