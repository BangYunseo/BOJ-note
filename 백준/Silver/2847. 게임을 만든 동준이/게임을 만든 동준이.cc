#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> arr(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    int res = 0;
    for(int i = N - 2; i >= 0; i--)
    {
        if(arr[i] >= arr[i + 1])
        {
            int dif = arr[i] - (arr[i + 1] - 1);
            res += dif;

            arr[i] = arr[i + 1] - 1;
        }
    }
    
    cout << res;
}