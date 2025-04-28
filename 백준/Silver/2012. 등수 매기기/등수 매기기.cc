#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> rank;
    
    int N, temp;
    long long int sum = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> temp;
        rank.push_back(temp);
    }
    sort(rank.begin(), rank.end());
    
    for(int i = 0; i < N; i++) 
        sum += abs(rank[i] - (i + 1));
    cout << sum;
}