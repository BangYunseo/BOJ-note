#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, minV = 987654321, maxV = 0, res = 0;
    cin >> N;
    
    int arr[1001];
    cin >> arr[0];
    for(int i = 1; i < N; i++)
    {
        cin >> arr[i];
        if(arr[i] > arr[i - 1])
        {
            minV = min(minV, arr[i - 1]);
            maxV = max(maxV, arr[i]);
            res = max(res, maxV - minV);
        }
        else if(arr[i - 1] >= arr[i])
        {
            minV = 987654321;
            maxV = 0;
        }
        
        res = max(res, maxV - minV);
    }
    
    cout << res;
}