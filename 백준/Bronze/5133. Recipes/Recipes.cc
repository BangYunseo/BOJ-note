#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(true){
        if(b == 0) break;
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int K;
    cin >> K;
    
    double I, C, w, n, d;
    string nd;
    for(int i = 1; i <= K; i++){
        cout << "Data Set " << i << ":\n";
        cin >> I >> C;
        for(int j = 1; j <= I; j++){
            cin >> w >> nd;
            n = stod(nd.substr(0, 1));
            d = stod(nd.substr(2));
            
            w *= C;
            n *= C;
            
            int count = 0;
            if(n > d){
                while(true){
                    if((n < d) || (n == d)) break;
                    n -= d;
                    count++;
                }
            }
            if(n == d){
                n = 0; d = 0;
                count++;
            }else{
                int ab = gcd(n, d);
                n /= ab;
                d /= ab;
            }
            w += count;
            
            if((n == 0) || (d == 0)) cout << w << '\n';
            else cout << w << ' ' << n << '/' << d << '\n';
        }
        cout << '\n';
    }
}