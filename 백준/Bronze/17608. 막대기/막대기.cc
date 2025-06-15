#include <iostream>
#include <stack>

using namespace std;

int arr[100001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int count = 1;
    int maxV = arr[N - 1];
    
    for(int i = N - 2; i >= 0; i--){
        if(arr[i] > maxV){
            count++;
            maxV = arr[i];
        }
    }
    
    cout << count;
}