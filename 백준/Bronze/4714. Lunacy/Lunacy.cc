#include <iostream>

using namespace std;

int main(){
    double N;
    while(true){
        cin >> N;
        if(N < 0) break;
        printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", N, N * 0.167);
    }
}