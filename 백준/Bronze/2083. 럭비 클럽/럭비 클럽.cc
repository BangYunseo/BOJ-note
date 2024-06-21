#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    while(true){
        string arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        if(arr[0] == "#") break;
        if((stoi(arr[1]) > 17) || (stoi(arr[2]) >= 80)){
            cout << arr[0] << " Senior\n";
        }
        else cout << arr[0] << " Junior\n";
        
    }
}