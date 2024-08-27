#include <iostream>

using namespace std;

int main(){
    int K; cin >> K;
    
    int s, r, n;
    for(int i = 1; i <= K; i++){
        cout << "Data Set " << i << ":" << endl;
        cin >> n >> s >> r;
        int d, v, res = 0;
        int temp = s * r;
        for(int j = 0; j < n; j++){
            cin >> d >> v;
            if(temp >= d) res += v;
        }
        cout << res << endl << endl;
    }
}