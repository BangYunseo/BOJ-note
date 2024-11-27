#include <iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T >> N;
    
    int temp, res = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        res += temp;
    }
    
    if(res >= T) cout << "Padaeng_i Happy";
    else cout << "Padaeng_i Cry";
}