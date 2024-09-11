#include <iostream>

using namespace std;

int main(){
    int N; cin >> N;
    
    int temp, res_M = 0, res_Y = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        
        int temp1 = (temp / 60) + 1;
        int temp2 = (temp / 30) + 1;
        
        res_M += temp1 * 15;
        res_Y += temp2 * 10;
    }
    if(res_M == res_Y) cout << "Y M " << res_M;
    else if(res_M < res_Y) cout << "M " << res_M;
    else if(res_M > res_Y) cout << "Y " << res_Y;
}