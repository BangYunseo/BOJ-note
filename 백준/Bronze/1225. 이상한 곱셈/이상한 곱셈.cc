#include <iostream>

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    
    long long int sum = 0;
    for(int i = 0; i < A.length(); i++)
    {
        for(int j = 0; j < B.length(); j++)
        {
            sum += ((A[i] - '0') * (B[j] - '0'));
        }
    }
    
    cout << sum;
}