#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int P;
    cin >> P;
    
    int T;
    while(P--){
        cin >> T;
        cout << T << ' ';
        int arr[20];
        
        int temp, count = 0;
        for(int i = 0; i < 20; i++)
            cin >> arr[i];

        for(int i = 0; i < 20; i++){
            for(int j = i; j < 20; j++){
                if(arr[i] > arr[j]) count++;
            }
        }
        cout << count << endl;
    }
}