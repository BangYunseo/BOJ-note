#include <iostream>

using namespace std;

int N, S;

int gcd(int a, int b){
    int c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    
    cin >> N >> S;
    int gcdnum = -1;
    while(N--){
        int a;
        cin >> a;
        int dis = (S > a) ? (S - a) : (a - S);

        if(gcdnum != -1){
            gcdnum = gcd(gcdnum, dis);
        } else gcdnum = dis;
    }
    cout << gcdnum;
}