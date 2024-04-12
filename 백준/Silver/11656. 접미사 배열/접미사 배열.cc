#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[1001];
string S;
int main(){
    cin >> S;
    int len = S.length();
    for(int i = 0; i < len; i++)
        arr[i] = S.substr(i);
    sort(arr, arr + len);
    for(int j = 0; j < S.length(); j++)
        cout << arr[j] << endl;
}