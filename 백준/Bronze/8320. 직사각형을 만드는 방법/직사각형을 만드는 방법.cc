#include <iostream>

using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if((i * j <= N) && (i <= j)){
                count++;
            }
        }
    }
    cout << count;
}