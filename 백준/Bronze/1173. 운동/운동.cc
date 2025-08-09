#include <iostream>

using namespace std;

int main(){
    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;

    if(m + T > M)
    {
        cout << -1;
        return 0;
    }
    
    int res = 0;
    int curm = m;
    
    while(N > 0)
    {
        if(curm + T <= M) 
        {
            curm += T;
            N--;
        }
        else
        {
            curm -= R;
            if(curm < m) curm = m;
        }
        res += 1;
    }
    cout << res;
}