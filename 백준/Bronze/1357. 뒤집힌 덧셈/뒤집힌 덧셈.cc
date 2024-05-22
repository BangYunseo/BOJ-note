#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string X, Y;
int main(){
    cin >> X >> Y;
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());

    int temp = stoi(X) + stoi(Y);
    string res = to_string(temp);
    reverse(res.begin(), res.end());
    cout << stoi(res);
}