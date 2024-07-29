#include <iostream>

using namespace std;

int main(){
    int N, temp = 0, count = 0;
    cin >> N;
    
    while(true){
        if(temp == N){
            cout << "Go!";
            break;
        }
        temp++;
        if((count % 6 == 0) && (count != 0)) cout << "Go! ";
        cout << temp << ' '; 
        count++;
    }
}