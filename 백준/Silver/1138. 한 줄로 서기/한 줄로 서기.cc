#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> res(N), ans(N);
    for(int i = 0; i < N; i++)
    {
        cin >> res[i];
    }
    
    for(int i = 0; i < N; i++)
    {
        int j = 0;
        while(res[i] != 0)
        {
            if(ans[j] == 0)
            {
                res[i]--;
            }
            j++;
        }
        
        while(ans[j] != 0)
        {
            j++;
        }
        ans[j] = i + 1; 
    }
    
    
    for(int i = 0; i < N; i++)
    {
        cout << ans[i] << ' ';
    }
}