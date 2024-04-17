#include <iostream>
#include <vector>
using namespace std;

int A, B;
vector<int> arr;
int main(){
    int num = 1;
    while(true){
        if(arr.size() >= 1000) break;
        for(int i = 0; i < num; i++){
            arr.push_back(num);
        }
        num++;
    }
    cin >> A >> B;

    int sum = 0;
    for(int i = A - 1; i < B; i++){
        sum += arr[i];
    }
    cout << sum;
}