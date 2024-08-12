#include <iostream>

using namespace std;

int main(){
    int n, count = 1;
    double res;
    
    while(true){
        cin >> n;
        if(n == 0)
            break;
        int temp = n / 2;
        
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(n % 2 == 0){
            res = (arr[temp - 1] + arr[temp]) / 2.0;
        } else{
            res = arr[temp];
        }
        
        printf("Case %d: %.1lf\n", count, res);
        count++;
    }
}