#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int temp, count = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp % 2 != 0) count++;
    }
    if(N - count <= count)
        cout << "Sad";
    else cout << "Happy";
}