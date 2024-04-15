#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int t, n;
long long arr[101] = {0, };
long long sum[101] = {0, };
int main(){
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        for(int k = 0; k < n; k++){
            for(int p = k + 1; p < n; p++)
                sum[i] += gcd(arr[k], arr[p]);
        }
        cout << sum[i] << endl;
    }
}