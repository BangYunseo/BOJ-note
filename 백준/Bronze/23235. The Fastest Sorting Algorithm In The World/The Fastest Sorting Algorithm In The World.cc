#include <iostream>

using namespace std;

int main(){
    int a, count = 1;
    while(true){
        cin >> a;
        if(a == 0) break;
        for(int i = 0; i < a; i++){
            int temp;
            cin >> temp;
        }
        printf("Case %d: Sorting... done!\n", count);
        count++;
    }    
}