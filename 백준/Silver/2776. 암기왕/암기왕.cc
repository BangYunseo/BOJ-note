#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while(T--) 
    {
        int N, M, temp;
        
        cin >> N;
        vector<int> numList1(N);
        for(int i = 0; i < N; i++) 
            cin >> numList1[i];
        
        sort(numList1.begin(), numList1.end());
        
        cin >> M;
        for(int i = 0; i < M; i++) 
        {
            cin >> temp;
            if(binary_search(numList1.begin(), numList1.end(), temp))
                cout << 1 << '\n';
            else 
                cout << 0 << '\n';
        }
    }
    
    return 0;
}