#include <iostream>

using namespace std;

long long N;
int L;

int main(){
    cin >> N >> L;
    
    for(int i = L; i <= 100; i++)
    {
        long long sum = (long long)i * (i - 1) / 2;
        long long num = N - sum;
        
        if(num < 0) break;
        
        if(num % i == 0)
        {
            long long startN = num / i;
            
            for(int j = 0; j < i; j++)
            {
                cout << startN + j << ' ';
            }
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}