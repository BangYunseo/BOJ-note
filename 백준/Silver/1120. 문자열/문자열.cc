#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    
    int minVal = 51;
    for(int i = 0; i < (B.length() - A.length()) + 1; i++){
        int tempVal = 0;
        for(int j = 0; j < A.length(); j++){
            if(B[j + i] != A[j]) 
                tempVal += 1;
        }
        minVal = min(minVal, tempVal);
    }
    cout << minVal;
}