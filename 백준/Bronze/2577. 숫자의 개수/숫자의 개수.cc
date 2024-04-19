#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int arr[10];
int resarr[10] = {0, };
int A, B, C;
int main(){
    cin >> A >> B >> C;
    
    long long res = A * B * C;
    string word = to_string(res);
    for(int i = 0; i < word.length(); i++){
        int temp = word[i] - '0';
        resarr[temp]++;
    }
    for(int i = 0; i < 10; i++) cout << resarr[i] << endl;
}