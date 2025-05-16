#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int main() {
    cin >> N >> M;

    int tempP, tempS, minP = 1001, minS = 1001, totalMin = 0;
    
    while(M--){
        cin >> tempP >> tempS;
        minP = min(minP, tempP);
        minS = min(minS, tempS);
    }

    if((minP / 6) < minS)
        totalMin += (N / 6) * minP + ((minP < (N % 6) * minS) ? minP : minS * (N % 6));
    else 
        totalMin += N * minS;

    cout << totalMin;
}