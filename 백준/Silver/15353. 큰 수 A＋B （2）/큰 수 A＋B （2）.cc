#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    string A, B, res = "";
    cin >> A >> B;
    
    int carry = 0;
    
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    
    int lenA = A.length();
    int lenB = B.length();
    int len = max(lenA, lenB);
    
    for(int i = 0; i < len; i++){
        int digitA = (i < lenA) ? (A[i] - '0'): 0; 
        int digitB = (i < lenB) ? (B[i] - '0'): 0; 
        
        int sum = digitA + digitB + carry;
        res += (sum % 10) + '0';
        carry = sum / 10;
    }
    
    if(carry > 0) res += carry + '0';
    reverse(res.begin(), res.end());
    
    cout << res;
}