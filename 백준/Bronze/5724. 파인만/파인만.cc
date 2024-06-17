#include <iostream>

using namespace std;

int main(){
    int temp;
    
    while(true){
        cin >> temp;
        int res = 0;
        if(temp == 0) break;
        for(int i = 1; i <= temp; i++){
            res += i * i;
        }
        cout << res << endl;
    }
}