#include <iostream>

using namespace std;

int main(){
    int sock[11] = {0, }; 
    int temp;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        sock[temp]++;
    }
    
    for(int i = 0; i <= 10; i++){
        if(sock[i] % 2 == 1){
            cout << i;
            break;
        }
    }
}