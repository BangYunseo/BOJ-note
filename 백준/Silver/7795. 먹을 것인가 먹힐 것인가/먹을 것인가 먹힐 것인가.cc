#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    int N, M;
    
    while(T--){
        cin >> N >> M;
        vector<int> A(N);
        vector<int> B(M);
        
        for(int i = 0; i < N; i++) cin >> A[i];
        for(int j = 0; j < M; j++) cin >> B[j];
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        int res = 0;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(A[i] > B[j]) res++;
                else break;
            }
        }
        
        cout << res << endl;
    }
}