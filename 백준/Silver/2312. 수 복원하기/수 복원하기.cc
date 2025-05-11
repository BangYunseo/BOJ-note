#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int num){
    int res = 1;
    
    if(num < 2) 
        res = 1;
    else {
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0) {
                res = 0;
                break;
            }
        }
    }
    return res;
}

void fact(int num){
    int count = 0;

    int i = 2;
    while(num > 1){
        if(num % i == 0){
            count++;
            num /= i;
        } else {
            if(count > 0) cout << i << ' ' << count << '\n';
            i++;
            count = 0;
        }
    }

    if(count > 0) cout << i << ' ' << count << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, tempNum;
    cin >> N;
    
    while(N--){
        cin >> tempNum;
        if(isPrime(tempNum)) {
            cout << tempNum << " 1\n";
        } else {
            fact(tempNum);
        }
    }
}