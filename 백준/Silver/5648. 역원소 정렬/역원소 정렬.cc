#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define ll long long

using namespace std;

int main(){
    ll n;
    string temp_num;
    cin >> n;
    
    vector<ll> arr;
    
    while(cin >> temp_num){
        reverse(temp_num.begin(), temp_num.end());
        arr.push_back(stoll(temp_num));
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << '\n';
}