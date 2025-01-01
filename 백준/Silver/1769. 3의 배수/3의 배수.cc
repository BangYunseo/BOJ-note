#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    int sum, count = 0;
    while(true){
        sum = 0;
        for(int i = 0; i < word.length(); i++)
            sum += (word[i] - '0');
        
        if(word.length() == 1) 
            break;
        else 
            word = to_string(sum);
        count++;
    }
    
    int res = stoi(word);
    cout << count << endl;
    if(res % 3 == 0) cout << "YES";
    else cout << "NO";
}