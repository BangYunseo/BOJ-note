#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int curX, curY, temp1, temp2, minX, minY;
    double res = 1000000;
    cin >> curX >> curY;
    cout << curX << " " << curY << endl;
    for(int i = 1; i < N; i++){
        cin >> temp1 >> temp2;
        double temp = sqrt(pow((temp1 - curX), 2) + pow((temp2 - curY), 2));
        if(temp < res){
            res = temp;
            minX = temp1;
            minY = temp2;
        }
    }
    cout << minX << ' ' << minY << endl;
    printf("%.2f\n", res);
}