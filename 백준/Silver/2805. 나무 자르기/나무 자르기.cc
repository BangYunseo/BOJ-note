#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long N, M, max = 0;
    cin >> N >> M;
    
    vector<int> tree_size;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        tree_size.push_back(temp);
    }
    
    sort(tree_size.begin(), tree_size.end());
    
    long long low = 0;
    long long high = tree_size[N - 1];
    
    while(low <= high){// cut이 가능할 때까지
        long long sum = 0;
        long long cut = (low + high) / 2;
        for(int i = 0; i < N; i++){
            if(tree_size[i] - cut > 0)
                sum += tree_size[i] - cut;
            // cut 하고 남는 게 있을 경우 포함
        }
        if(sum >= M){
            max = cut;
            low = cut + 1;
        } else high = cut - 1;
    }
    cout << max;
}