#include <iostream>

using namespace std;

int arr[31] = {0, };
int main(){
    int N;
    cin >> N;
    
    arr[0] = 1;
    arr[1] = 0;
    arr[2] = 3;
    int res = 0;
    for(int i = 3; i <= N; i++){
        if(i % 2 != 0) arr[i] = 0;
        else{
            for(int j = 2; j <= N; j += 2){
                if(j == 2) arr[i] = arr[i - j] * arr[2];
                else if((i - j) >= 0) arr[i] += arr[i - j] * 2 ;
            }
        }
    }
    cout << arr[N];
}