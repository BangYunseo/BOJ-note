#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int num[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> num[i];

    int index = -1;
    for(int i = N - 1; i > 0; i--){
        if(num[i - 1] > num[i]){
            index = i - 1;
            break;
        }
    }
    if(index == -1){
        cout << -1;
    } else {
        for(int i = N - 1; i > index; i--){
            if(num[i] < num[index]){
                swap(num[i], num[index]);
                break;
            }
        }

        reverse(num + index + 1, num + N);
        
        for(int i = 0; i < N; i++){
            cout << num[i] << ' '; 
        }
    }
}