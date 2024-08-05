#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int C;
    cin >> C;

    vector<int> arr;
    arr.push_back(0);
    int count = 0;
    for(int j = 1; j <= 1000; j++){
        for(int k = 1; k <= j; k++){
            if(gcd(j, k) == 1) count++;
        }
        arr.push_back(count);
    }

    while(C--){
        int N;
        cin >> N;
        cout << arr[N] * 2 + 1 << endl;
    }
}