#include <iostream>
#include <algorithm>

using namespace std;

int N;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    int res = 0;
    for(int i = 1; i < N; i++){
        int sum = 0;
        int num = i;
        while(num != 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum + i == N){
            res = i;
            break;
        }
    }

    cout << res;
}