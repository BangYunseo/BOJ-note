#include <iostream>

using namespace std;

int N, M;
int arr[101];
int main(){
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        arr[i] = i;
    }
    
    int temp1, temp2;
    while(M--){
        cin >> temp1 >> temp2;
        for(int i = 0; i <= (temp2 - temp1) / 2; i++){
            swap(arr[temp1 + i], arr[temp2 - i]);
        }
    }
    
    for(int i = 1; i <= N; i++){
        cout << arr[i] << ' ';
    }
}