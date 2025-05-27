#include <iostream>
#include <cmath>

using namespace std;

void Hanoi(int n, int from, int to, int by){
    if(n == 1){
        cout << from << ' ' << to << '\n';
        return;
    }
    
    Hanoi(n - 1, from, by, to);
    cout << from << ' ' << to << '\n';
    Hanoi(n - 1, by, to, from);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    long long res = 1;
    cout << (res << N) - 1 << '\n';
    Hanoi(N, 1, 3, 2);
}