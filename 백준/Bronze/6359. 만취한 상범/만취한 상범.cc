#include <iostream>

using namespace std;

int main(){
    int T, n;
    cin >> T;
    
    while(T--)
    {
        cin >> n;
        int res = 0, num[101] = {0, };
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j <= n; j += i)
            {
                 num[j]++; 
            }
        }
        
        for(int i = 1; i <= n; i++)
        {
            if(num[i] % 2 != 0)
            {
                res++;
            }
        }
        cout << res << endl;
    }
}