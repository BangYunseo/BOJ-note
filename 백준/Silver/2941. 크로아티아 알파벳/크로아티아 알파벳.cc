#include <iostream>
#include <string>
using namespace std;

string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
int main(){
    string word; cin >> word;
    int count;
    for(int i = 0; i < 8; i++){
        while(1){
            count = word.find(arr[i]);
            if(count == string::npos) break;
            
            word.replace(count, arr[i].length(), "*");
        }
    }
    cout << word.length();
}