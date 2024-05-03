#include <iostream>
#include <vector>
using namespace std;

int M, N;
vector<int> arr;

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    } return true;
}
int main(){
    cin >> M >> N;
    int sum = 0;
    for(int i = M; i <= N; i++){
        if(isPrime(i)){
            sum += i;
            arr.push_back(i);
        }
    }
    if(arr.size() == 0) cout << -1;
    else cout << sum << '\n' << arr[0];
}