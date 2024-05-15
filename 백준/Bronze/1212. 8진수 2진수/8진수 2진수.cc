#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    cin >> num;

    string arr[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string res = "";

    
    for(int i = 0; i < num.length(); i++){
        int temp = num[i] - '0';
        if(i == 0){
            cout << stoi(arr[temp]);
        }else {
            cout << arr[temp];
        }
    } 
    cout << res;
}