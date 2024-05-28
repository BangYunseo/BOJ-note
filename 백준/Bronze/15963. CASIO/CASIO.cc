#include <iostream>

using namespace std;

long long int N, M;
int main(){
    cin >> N >> M;
    if(N == M) 
        cout << '1';
    else if(N != M)
        cout << '0';
}