#include <iostream>

using namespace std;

int arr[101];
int main(){
    int N, guest, cnt = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> guest;
        arr[guest]++;
        
        if(arr[guest] > 1)
        {
            cnt++;
        }
    }
    
    cout << cnt;
}