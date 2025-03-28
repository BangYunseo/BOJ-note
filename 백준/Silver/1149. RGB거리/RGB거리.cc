#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1001][3] = {0};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    int cost[3];
    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[0][2] = 0;
    for(int i = 1; i <= N; i++){
        cin >> cost[0] >> cost[1] >> cost[2];
        arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + cost[0];
        arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + cost[1];
        arr[i][2] = min(arr[i - 1][1], arr[i - 1][0]) + cost[2];
    }
    cout << min(arr[N][2],min(arr[N][0],arr[N][1]));
}