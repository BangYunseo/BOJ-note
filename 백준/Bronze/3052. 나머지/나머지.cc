#include <iostream>

using namespace std;

int main(){
    int res[42] = {0, };
    int temp;
    for(int i = 0; i < 10; i++){
        cin >> temp;
        temp %= 42;
        res[temp] += 1;
    }
    int count = 0;
    for(int i = 0; i < 42; i++) if(res[i] != 0) count++;
    cout << count;
}