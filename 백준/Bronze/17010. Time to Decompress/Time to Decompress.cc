#include <iostream>

using namespace std;

int main(){
    int L;
    cin >> L;
    
    int repeat;
    char word;
    while(L--){
        cin >> repeat >> word;
        while(repeat--) cout << word;
        cout << endl;
    }
}