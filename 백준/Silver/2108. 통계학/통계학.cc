#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {    
    int N;
    cin >> N;

    int arr[500001];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);

    double sum = 0; 
    for(int i = 0; i < N; i++){
        sum += arr[i];
    }
    int mean = round(sum / N);
    
    int count[8001] = {0};
    int res, cnt = 0;
    for(int i = 0; i < N; i++){
        count[arr[i] + 4000]++;
    }

    int maxMode = *max_element(count, count + 8001);
    for(int i = 0; i < 8001; i++){
        if(count[i] == maxMode){
            cnt++;
            res = i - 4000;
        }
        if(cnt == 2){
            break;
        }
    }

    
    cout << mean << endl;
    cout << arr[(N - 1) / 2] << endl;
    cout << res << endl;
    cout << (arr[N - 1] - arr[0]) << endl;
}