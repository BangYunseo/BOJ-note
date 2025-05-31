#include <iostream>

using namespace std;

int count = 0;
char arr[9][9];
int main(){
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> arr[i][j];
            if((i % 2 == 0 && j % 2 == 0)||(i % 2 != 0 && j % 2 != 0)){
                if(arr[i][j] == 'F') 
                    count++;
            }
        }
    }
    cout << count;
}