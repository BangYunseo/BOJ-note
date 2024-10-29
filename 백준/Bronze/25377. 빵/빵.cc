#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> arr;
    int A, B;
    
    for(int i = 0; i < N; i++){
        cin >> A >> B;
        if(A <= B) arr.push_back(B);
    }
    if(size(arr) == 0) cout << -1;
    else {
        int min = 1001;
        for(int i = 0; i < size(arr); i++){
            if(min > arr[i]) 
                min = arr[i];
        }
        cout << min;
    }
}