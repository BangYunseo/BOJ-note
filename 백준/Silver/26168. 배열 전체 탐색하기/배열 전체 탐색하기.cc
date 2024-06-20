#include <iostream>

using namespace std;

long long arr[100004];
int n, m;

int A(long long num){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= num) count++;
    }
    return count;
}

int B(long long num){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > num) count++;
    }
    return count;
}

int C(long long num1, long long num2){
    int count = 0;
    for(int i = 0; i < n; i++){
        if((arr[i] >= num1) && (arr[i] <= num2)) count++;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    int temp, temp2;
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int j = 0; j < m; j++){
        int sel;
        cin >> sel;
        
        if(sel == 1){
            long long temp;
            cin >> temp;
            cout << A(temp) << '\n';
        }
        else if(sel == 2){
            long long temp;
            cin >> temp;
            cout << B(temp) << '\n';
        }
        else if(sel == 3){
            long long temp1, temp2;
            cin >> temp1 >> temp2;
            cout << C(temp1, temp2) << '\n';
        }
    }
}