#include <iostream>

using namespace std;

int main(){
    long N, T, P;
    cin >> N;
    long arr[6];
    
    for(int i = 0; i < 6; i++) cin >> arr[i];
    cin >> T >> P;
    
    long shirts_count = 0;
    for(int i = 0; i < 6; i++){
        if(arr[i] == 0) 
            shirts_count += 0;
        else{
            shirts_count += arr[i] / T;
            if(arr[i] % T != 0 && arr[i] != 0) shirts_count++;
        }
    }
    long pen_count, pen_count_t;
    if(N / P < 1) pen_count = 0;
    else pen_count = N / P;
    pen_count_t = N % P;
    
    cout << shirts_count << endl << pen_count << ' ' << pen_count_t;
}