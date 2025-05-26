#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[100001];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int sumV = arr[0];
    int tempV = arr[0];
    for(int i = 1; i < n; i++){
        tempV = max(arr[i], tempV + arr[i]);
        sumV = max(tempV, sumV);
    }
    
    cout << sumV;
}