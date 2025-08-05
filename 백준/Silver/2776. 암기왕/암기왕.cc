#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, N, M;
    cin >> T;
    
    while(T--)
    {
        cin >> N;
        map<int, int> numList;
        
        int temp;
        for(int i = 0; i < N; i++)
        {
            cin >> temp;
            numList[temp] = 1;
        }
        
        cin >> M;
        for(int i = 0; i < M; i++)
        {
            cin >> temp;
            if(numList.count(temp)) 
                cout << 1;
            else 
                cout << 0;
            
            cout << '\n';
        }
    }
    
    return 0;
}