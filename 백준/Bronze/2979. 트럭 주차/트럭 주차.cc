#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    
    int a, b, fee[3][101], res = 0;
    int minV = 987654321, maxV = -1;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 101; j++)
        {
            fee[i][j] = 0;        
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        for(int j = a; j < b; j++)
        {
            fee[i][j]++;
        }
        minV = min(minV, a);
        maxV = max(maxV, b);
    }

    for(int i = minV; i < maxV; i++)
    {
        int sum = fee[0][i] + fee[1][i] + fee[2][i];
        
        if(sum == 3)
        {
            res = res + (3 * C);
        }
        else if(sum == 2)
        {
            res = res + (2 * B);
        }
        else if(sum == 1)
        {
            res += A;
        }
    }
    
    cout << res;
}