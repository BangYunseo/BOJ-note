#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    string word;
    cin >> word;
    
    string res = word.substr(N - 5, N);
    cout << res;
}