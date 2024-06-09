#include <iostream>
#include <string>

using namespace std;

string arr[7] ={"Never gonna give you up", 
                "Never gonna let you down", 
                "Never gonna run around and desert you", 
                "Never gonna make you cry",
                "Never gonna say goodbye",
                "Never gonna tell a lie and hurt you",
                "Never gonna stop"};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    cin.ignore();
    
    int count;
    string word;
    while(T--){
        count = 1;
        getline(cin, word);
        for(int i = 0; i < 7; i++){
            if (word == arr[i]) 
                count = 0;
        }
        if(count == 1) 
            break;
    }
    if (count == 1) 
        cout << "Yes";
    else 
        cout << "No";
}