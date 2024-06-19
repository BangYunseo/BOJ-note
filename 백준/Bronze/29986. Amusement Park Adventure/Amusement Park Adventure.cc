#include <iostream>

using namespace std;

int main(){
    int N, H, temp, count = 0;
    cin >> N >> H;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(H >= temp) count++;
    }
    cout << count;
}