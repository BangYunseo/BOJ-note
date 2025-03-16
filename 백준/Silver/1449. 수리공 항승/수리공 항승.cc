#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, L;
vector<int> V;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> L;
    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        V.push_back(temp);
    }

    sort(V.begin(), V.end());

    int res = 1;
    int temp2 = L - 1;

    for(int i = 0; i < N - 1; i++){
        if(V[i + 1] - V[i] <= temp2) temp2 -= V[i + 1] - V[i];
        else {
            temp2 = L - 1;
            res++;
        }
    }
    cout << res;
}