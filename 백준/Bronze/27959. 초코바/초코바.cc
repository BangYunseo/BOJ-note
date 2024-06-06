#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int bal = 100 * N;
    if(bal >= M){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}