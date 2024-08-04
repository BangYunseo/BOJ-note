#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int arr[N];
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + N);
    
    int count = 4;
    for(int i = 0; i < N; i++){
        int temp = distance(arr + i, lower_bound(arr, arr + N, arr[i] + 5));
        count = min(count, 5 - temp);
    }
    cout << count << endl;
}