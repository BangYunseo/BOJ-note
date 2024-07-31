#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N; 
    
    int res = 0;
    for(int i = 1; i < N; i++){
        int sum = 0;
        int num = i;
        while(true){
            if(num == 0)
                break;
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