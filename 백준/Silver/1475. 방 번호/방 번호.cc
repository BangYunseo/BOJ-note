#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[10] = {0};
    
    int N;
    cin >> N;
    
    while(true){
        arr[N % 10]++;
        if(N / 10 == 0) break;
        N /= 10;
    }
    
    int num = 0;
    for(int i = 0; i < 10; i++){
        if(i != 9 && i != 6) num = max(num, arr[i]);
    }
    
    cout << max(num, (arr[6] + arr[9] + 1) / 2);
}