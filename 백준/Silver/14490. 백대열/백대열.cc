#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b){
    while(a % b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}
int main(){
    string word;
    getline(cin, word);
    
    int num_slice = -1;
    for(int i = 0; i < word.length(); i++){
        if(!(word[i] >= '0' && word[i] <= '9')){
            num_slice = i;
            break;
        }
    }
    int n = stoi(word.substr(0, num_slice));
    int m = stoi(word.substr(num_slice + 1));
    int temp = gcd(n, m);
    cout << (n / temp) << ':' << (m / temp);
    
}