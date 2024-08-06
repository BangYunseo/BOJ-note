#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    double a, b, c, d, N, count = 0;
    cin >> a >> b >> c >> d >> N;
    
    for(int i = 0; i < N; i++){
        int u, v;
        cin >> u >> v;
        
        if(max((a * (v - b) * (v - b) + c), 
              (a * (v - b) * (v - b) + d)) == u){
            count++;
        }
    }
    
    cout << count;
}