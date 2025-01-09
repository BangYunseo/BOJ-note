#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> num[30001];
int N;

bool compare(const vector<int>& a, const vector<int>& b){
    return a.size() > b.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    int temp;
    for(temp = N; temp != 0; temp--){
        num[temp].push_back(N);
        num[temp].push_back(temp);
        for(int i = 2; num[temp][i - 2] - num[temp][i - 1] >= 0; i++){
            num[temp].push_back(num[temp][i - 2] - num[temp][i - 1]);
        }
    }
    
    sort(num, num + (N + 1), compare);
    
    cout << num[0].size() << '\n';
    for(int i = 0; i < num[0].size(); i++){
        cout << num[0][i] << ' ';
    }
}