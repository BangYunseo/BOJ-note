#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    long long int res = 1;
    
    for(int i = 1; i <= n; i++) 
        res *= i;
    
    string word = to_string(res);
    int len = word.length() - 1;
    cout << word[len];
}