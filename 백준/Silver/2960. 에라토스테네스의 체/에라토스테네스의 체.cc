#include <iostream>

using namespace std;

int N, K;
int arr[1001] = {0, };

int main(){
    cin >> N >> K;
    int num = 2, res = 1;
    
    int count = 0;
    for(int i = 2; i <= N; i++){
        for(int j = i; j <= N; j += i){
            int temp = 0;
            for(int k = 0; arr[k] != 0; k++){
                if(arr[k] == j) temp++;
            }
            if(temp == 0) arr[count++] = j;
        }
    }
    cout << arr[K - 1];
}