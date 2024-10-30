#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int c;
    for(int i = 0; i < N; i++){
        cin >> c;
        
        int arr[c] = {0, };
        double res = 0;
        
        for(int j = 0; j < c; j++){
            cin >> arr[j];
            res += arr[j];
        }
        
        res /= c;
        
        double count = 0;
        for(int j = 0; j < c; j++){
            if(arr[j] > res) count++;
        }
        double num = count / c;
        printf("%.3f", num * 100);
        cout << "%" << endl;
    }
}