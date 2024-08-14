#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    string word;
    while(n--){
        cin >> word;
        reverse(word.begin(), word.end());
        cout << word << endl;
    }
}