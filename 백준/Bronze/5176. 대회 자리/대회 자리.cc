#include <iostream>

using namespace std;

int K, P, M;
int main(){
    cin >> K;
    for(int i = 0; i < K; i++){
        int arr[501] = {0, };
        cin >> P >> M;
        int count = 0;
        for(int a = 0; a < P; a++){
            int temp;
            cin >> temp;
            if(arr[temp]) count++;
            else arr[temp] = 1;
        }
        cout << count << endl;
    }
}