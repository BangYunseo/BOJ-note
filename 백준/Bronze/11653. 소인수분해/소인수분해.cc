#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> arr;
    int i = 2;
    while(N != 1){
        if(N % i == 0) {
            N = N / i;
            arr.push_back(i);
        }
        else{
            i++;
        }
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << endl;
}