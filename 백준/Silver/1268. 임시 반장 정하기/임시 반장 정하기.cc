#include <iostream>

using namespace std;

int arr[1001][6] = {0, };
bool check[1001][1001] = {false, };
int main(){
    int N;
    cin >> N;

    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= 5; j++) 
            cin >> arr[i][j];
    }
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= N - 1; j++){
            for(int k = j + 1; k <= N; k++){
                if(arr[j][i] == arr[k][i]){
                    check[j][k] = true;
                    check[k][j] = true;
                }
            }
        }
    }
    
    int max = 0;
    int index = 1;
    for(int i = 1; i <= N; i++){
        int temp = 0;
        for(int j = 1; j <= N; j++){
            if(check[i][j] == true) temp++;
        }
        if(temp > max){
            max = temp;
            index = i;
        }
    }
    cout << index;
}