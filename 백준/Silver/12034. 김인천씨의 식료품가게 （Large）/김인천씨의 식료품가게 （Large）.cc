#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, temp;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        vector<int> arr(temp * 2);
        for(int j = 0; j < temp * 2; j++) cin >> arr[j];

        vector<int> res;
        for(int a = 0; a < arr.size(); a++){
            for(int b = a + 1; b < arr.size(); b++){
                if((arr[a] == (arr[b] * 0.75)) && (arr[a] != 0) && (arr[b] != 0)){
                    res.push_back(arr[a]);
                    arr[a] = 0;
                    arr[b] = 0;
                    break;
                }
            }
        }
        cout << "Case #" << i + 1 << ": ";
        for(int c = 0; c < temp; c++){
            cout << res[c] << ' ';
        }
        cout << endl;
    }
}