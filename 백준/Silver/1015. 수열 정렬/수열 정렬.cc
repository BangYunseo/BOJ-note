#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    vector<pair<int, int>> P(N);
    int temp;
    for(int i = 0; i < N; i++)
    {
        cin >> P[i].first;
        P[i].second = i;
    }

    sort(P.begin(), P.end());

    vector<int> res(N);

    for(int i = 0; i < N; i++)
    {
        res[P[i].second] = i;    
    }
    
    for(int i = 0; i < N; i++)
    {
        cout << res[i] << ' ';
    }
}