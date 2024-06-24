#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double N, res = 0;
    while(true){
        cin >> N;
        if(N == 0) break;
        
        res = 1 + N + (N * N) + (N * N * N) + (N * N * N * N);
        printf("%.2lf\n", res);
    }
}