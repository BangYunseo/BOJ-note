#include <iostream>
#include <algorithm>
#define MAX 10001

using namespace std;

int N;
string dp[MAX];

string sum(string a, string b){
    int num = 0;
    int carry = 0;
    string res = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(a.length() < b.length()) a += "0";
    while(a.length() > b.length()) b += "0";

    for(int i = 0; i < a.length(); i++){
        num = ((a[i] - '0') + (b[i] - '0') + carry) % 10;
        res += to_string(num);
        carry = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
    }
    if(carry != 0){
        res += to_string(carry);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    
    int N;
    cin >> N;

    dp[0] = "0";
    dp[1] = "1";
    
    for(int i = 2; i <= N; i++){
        dp[i] = sum(dp[i - 1], dp[i - 2]);
    }
    cout << dp[N];
}