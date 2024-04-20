#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string a, b;
int res;
int main(){
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    int X = stoi(a);
    int Y = stoi(b);
    res = X + Y;
    string result = to_string(res);
    reverse(result.begin(), result.end());
    cout << stoi(result) << endl;
}
