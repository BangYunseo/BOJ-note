#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char arr[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(){
    int N, B;
    cin >> N >> B;
    
    string res = "";
    while(true){
        if(N == 0) break;
        int temp = N % B;
        if(temp < 10) res += to_string(temp);
        else res += arr[temp - 10];        
        N /= B;
    }
    reverse(res.begin(), res.end());
    cout << res;
}