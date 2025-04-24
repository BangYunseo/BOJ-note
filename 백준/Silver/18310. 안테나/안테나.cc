#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> A;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    A.resize(N);
    
    for(int i = 0; i < N; i++)
        cin >> A[i];
    
    sort(A.begin(), A.end());
    cout << A[(N - 1) / 2];

}