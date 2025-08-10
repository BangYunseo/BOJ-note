#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int L, n;
    cin >> L; 
    
    vector<int> S(L);
    for(int i = 0; i < L; i++)
    {
        cin >> S[i];
    }
    
    sort(S.begin(), S.end());
    
    cin >> n;

    if(find(S.begin(), S.end(), n) != S.end())
    {
        cout << 0;
        return 0;
    }
    
    int A = 0, B = 0;
    for(int i = 0; i < L; i++)
    {
        if(S[i] < n) 
            A = S[i];
        else 
            break;
    }

    for(int i = 0; i < L; i++)
    {
        if(S[i] > n)
        {
            B = S[i];
            break;
        }
    }
    
    int res = (n - A) * (B - n) -1;
    cout << res;
    
    return 0;
}