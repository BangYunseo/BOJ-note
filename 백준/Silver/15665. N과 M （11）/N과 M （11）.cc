#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
bool visited[10001];
int res[8];
vector<int> arr;

void dfs(int num){
    if(num == M)
    {
        for(int i = 0; i < M; i++)
        {
            cout << res[i] << ' ';
        }

        cout << '\n';
        return;
    }

    for(int i = 0; i < arr.size(); i++)
        {
            res[num] = arr[i];
            dfs(num + 1);
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;

    int temp;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        if(!visited[temp])
        {
            arr.push_back(temp);
            visited[temp] = true;
        }
    }

    sort(arr.begin(), arr.end());

    dfs(0);
}