#include <iostream>

using namespace std;

long long N, B, C;
long long A[1000001];
int main(){
    cin >> N;

    for(int i = 0; i < N; i++)  cin >> A[i];
    cin >> B >> C;
    long long count = 0;
    count += N;
    for(int i = 0; i < N; i++){
        A[i] -= B;
        if(A[i] <= 0) continue;
        count += A[i] / C;
        if(A[i] % C) count++;
    }
    cout << count;
}