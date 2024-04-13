#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[1000001] = {1, 1, 1, 0, };

int main(){
    int n, a, b;

    for(int i = 2; i * i < 1000000; i++){
        if(arr[i] == 0){
            for(int j = i * i; j < 1000000; j += i) arr[j] = 1;
        }
    }
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    
    while(true){
        cin >> n;
        if(n == 0)
            break;
        a = 3;
        b = n - 3;
        
        while(a <= b){
            if(!arr[a] && !arr[b]){
                if((a + b == n)) break;
            }
            a += 2;
            b -= 2;
        }
        if(a > b) cout << "GoldBach's conjecture is wrong.";
        else cout << n << " = " << a << " + " << b << '\n'; 
    }
}