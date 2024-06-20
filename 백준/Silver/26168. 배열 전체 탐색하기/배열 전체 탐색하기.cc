#include <iostream>
#include <algorithm> // sort와 lower_bound, upper_bound를 사용하기 위함
using namespace std;

long long int arr[100004];
int n, m;

int A(long long int num){
    // lower_bound를 사용하여 num보다 크거나 같은 첫 번째 위치를 찾음
    return n - (lower_bound(arr, arr + n, num) - arr);
}

int B(long long int num){
    // upper_bound를 사용하여 num보다 큰 첫 번째 위치를 찾음
    return n - (upper_bound(arr, arr + n, num) - arr);
}

int C(long long int num1, long long int num2){
    // lower_bound와 upper_bound를 사용하여 범위 내의 원소 개수를 찾음
    return upper_bound(arr, arr + n, num2) - lower_bound(arr, arr + n, num1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 배열을 정렬
    sort(arr, arr + n);
    
    for(int j = 0; j < m; j++){
        int sel;
        cin >> sel;
        
        if(sel == 1){
            long long int temp;
            cin >> temp;
            cout << A(temp) << '\n';
        }
        else if(sel == 2){
            long long int temp;
            cin >> temp;
            cout << B(temp) << '\n';
        }
        else if(sel == 3){
            long long int temp1, temp2;
            cin >> temp1 >> temp2;
            cout << C(temp1, temp2) << '\n';
        }
    }
}
