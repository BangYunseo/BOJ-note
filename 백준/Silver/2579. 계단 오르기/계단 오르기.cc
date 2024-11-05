#include <iostream>

using namespace std;

int steps[301];
int res[301][3];
int N;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++) cin >> steps[i];

    res[0][0] = steps[0];
    res[1][1] = steps[0] + steps[1];
    res[1][0] = steps[1];

    for(int i = 2; i < N; i++){
        res[i][1] = res[i - 1][0] + steps[i];
        res[i][0] = max(res[i - 2][0], res[i - 2][1]) + steps[i];
    }
    cout << max(res[N - 1][0], res[N - 1][1]);
}