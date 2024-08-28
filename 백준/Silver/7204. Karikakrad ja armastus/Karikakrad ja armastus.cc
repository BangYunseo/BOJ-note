#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    if(b > a){
        int temp = a;
        a = b; 
        b = temp;
    }
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}
int main(){
    int N;
    cin >> N;
    
    int res;
    int flower_leap[N];
    
    cin >> res;
    for(int i = 1; i < N; i++){
        cin >> flower_leap[i];
        res = gcd(res, flower_leap[i]);
    }
    cout << res;
}