#include <iostream>
#include <string>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int res = A + B;
    string word = to_string(res);
    cout << word.length();
}