#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    string word;
    bool check = false;
    for(int i = 0; i < N; i++){
        cin >> word;
        if(word == "anj"){
            check = true;
            break;
        }
    }
    if(check) cout << "뭐야;";
    else cout << "뭐야?";
}