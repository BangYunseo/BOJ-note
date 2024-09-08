#include <iostream>


using namespace std;

int main(){
    int num[5];
    int min = -1;
    for(int i = 0; i < 5; i++){
        cin >> num[i];
        if(min == -1 || min > num[i]) min = num[i];
    }

    int num_min = min;
    while(true){
        int count = 0;
        for(int i = 0; i < 5; i++) if(num_min % num[i] == 0) count++;
        if(count >= 3) break;
        num_min++;
    }
    cout << num_min;
}