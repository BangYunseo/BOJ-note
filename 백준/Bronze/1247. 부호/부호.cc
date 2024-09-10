#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    for(int i = 0; i < 3; i++){
        cin >> N;
        long long int temp, res = 0, count = 0;
        for(int j = 0; j < N; j++){
            cin >> temp;
            long long int prv = res;
            res += temp;
            if(temp > 0 && prv > 0 && res < 0) count++;
            if(temp < 0 && prv < 0 && res > 0) count--;
        }
        if(count == 0){
            if(res == 0) cout << 0;
            else{
                if(res > 0) cout << "+";
                else cout << "-";
            }
        } else {
            if(count > 0) cout << "+";
            else cout << "-";
        }
        cout << '\n';
    }
}