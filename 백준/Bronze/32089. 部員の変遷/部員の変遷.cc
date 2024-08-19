#include <iostream>

using namespace std;

int main(){
    int casenum;
    int arr[1001];
    while(true){
        cin >> casenum;
        if(casenum == 0) break;
        cin >> arr[0] >> arr[1] >> arr[2];
        int max = arr[0] + arr[1] + arr[2];
        for(int i = 3; i < casenum; i++){
            cin >> arr[i];
            int temp = arr[i] + arr[i - 1] + arr[i - 2];
            if(temp > max) max = temp;
        }
        cout << max << endl;
    }
}