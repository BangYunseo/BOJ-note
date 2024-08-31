#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int count = 0;
    for(int i = 1; i <= N; i++){
        if(i <= 99) count++;
        else if((i >= 100) && (i <= 999)){
            int temp1 = i / 100;
            int temp2 = (i % 100) / 10;
            int temp3 = (i % 10);
            if(temp3 - temp2 == temp2 - temp1) count++;
        }
    }
    cout << count;
}