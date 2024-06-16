#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int temp, res = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        res += temp;
    }
    if(res == 0){
        cout << "Stay";
    }
    else if(res > 0){
        cout << "Right";
    }
    else{
        cout << "Left";
    }
}