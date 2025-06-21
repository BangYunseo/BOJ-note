#include <iostream>

using namespace std;

int N, K, S, Y;
int arr[2][7];

int main(){
    cin >> N >> K;
    
    while(N--){
        cin >> S >> Y; 
        arr[S][Y]++;
    }
    
    int countV = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 7; j++){
            countV += (arr[i][j] / K);
            if(arr[i][j] % K != 0) countV++;
        }
    }
    
    cout << countV;
}