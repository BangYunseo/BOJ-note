#include <iostream>
#include <cstring>
#include <vector>
#define INF 987654321

using namespace std;

int TC, N, M, W, S, E, T;
int num[501];
vector<pair<pair<int, int>, int>> arr;

void func(){
    string res =  "NO";

    memset(num, INF, sizeof(num));
    num[1] = 0;

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < arr.size(); j++){
            int s = arr[j].first.first;
            int e = arr[j].first.second;
            int t = arr[j].second;

            if(num[e] > num[s] + t) num[e] = num[s] + t;
        }
    }

    for(int i = 0; i < arr.size(); i++){
        int s = arr[i].first.first;
        int e = arr[i].first.second;
        int t = arr[i].second;

        if(num[e] > num[s] + t){
            res = "YES";
            break;
        }
    }

    cout << res << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> TC;

    while(TC--){
        arr.clear();
        cin >> N >> M >> W;

        for(int i = 0; i < M; i++){
            cin >> S >> E >> T;
            arr.push_back({{S, E}, T});
            arr.push_back({{E, S}, T});
        }

        for(int i = 0; i < W; i++){
            cin >> S >> E >> T;
            arr.push_back({{S, E}, -T});
        }

        func();
    }
}