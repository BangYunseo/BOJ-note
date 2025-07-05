#include <iostream>

using namespace std;

int a, b, c;
int dp[21][21][21];

int w(int x, int y, int z){
    if(x <= 0 || y <= 0 || z <= 0)
    {
        return 1;
    } 
    else if(x > 20 || y > 20 || z > 20)
    {
        return 1048576;
    }
    
    if(dp[x][y][z] != 0)
    {
        return dp[x][y][z];
    }
    
    if(x < y && y < z)
    {
        dp[x][y][z] =  w(x, y, z - 1) + w(x, y - 1, z - 1) 
            - w(x, y - 1, z);
    }
    else 
    {
        dp[x][y][z] = w(x - 1, y, z) + w(x - 1, y - 1, z) 
            + w(x - 1, y, z - 1) - w(x - 1, y - 1, z - 1);
    }
    return dp[x][y][z];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(true)
    {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)
        {
            break;
        }
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
    }
}