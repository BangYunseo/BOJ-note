#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, T;
int main(){
    cin >> T;
    while(T--){
        cin >> N;

        vector<pair<int, int>> rankList(N);
        
        for(int i = 0; i < N; i++)
            cin >> rankList[i].first >> rankList[i].second;
        
        
        sort(rankList.begin(), rankList.end());

        int countV = 1;
        int minV = rankList[0].second;
        for(int i = 1; i < N; i++){
            if(rankList[i].second < minV){
                countV++;
                minV = rankList[i].second;
            }
        }
        cout << countV << '\n';
    }
}