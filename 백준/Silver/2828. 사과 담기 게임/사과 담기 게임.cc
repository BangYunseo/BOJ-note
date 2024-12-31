#include <iostream>

using namespace std;

int main(){
    int N, M, J;
    cin >> N >> M >> J;
    
    int temp, left = 1, right = M, count = 0;
    for(int i = 0; i < J; i++){
        cin >> temp;
        while(left > temp || right < temp){
            if(left > temp) right--, count++, left--;
            if(right < temp) right++, count++, left++;
        }
    }
    cout  << count;
}