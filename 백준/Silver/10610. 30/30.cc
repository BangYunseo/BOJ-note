#include <iostream>
#include <algorithm>

using namespace std;

string N;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    sort(N.begin(), N.end(), greater<>());
    
    if(N[N.length() - 1] != '0') cout << -1;
    else {
        long long sum = 0;
        for(int i = 0; i < N.length(); i++){
            sum += (N[i] - '0');
        }
        
        if(sum % 3 == 0) cout << N;
        else cout << -1;
    }
}