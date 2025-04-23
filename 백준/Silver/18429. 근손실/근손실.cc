#include <iostream>

using namespace std;

int A[9];
bool check[9];
int N, K, count = 0, weight = 500;

void losingWeight(int a, int b){
    if(a == N - 1){
        if(b < 500) return;
        else {
            count++;
            return;
        }
    }
    for(int i = 0; i < N; i++){
        if(!check[i] && b - K + A[i] >= 500){
            check[i] = true;
            losingWeight(a + 1, b - K + A[i]);
            check[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
   
    for(int i = 0; i < N; i++) cin >> A[i];
    losingWeight(count, weight);
    cout << count;
}