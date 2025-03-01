#include <iostream>
#include <algorithm>

#define INF 987654321

using namespace std;

int map[101][101];
int n, m;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    fill(&map[0][0], &map[0][0] + 101 * 101, INF);
    // 2차원 배열 INF로의 초기화
    
    for(int i = 1; i <= n; i++) map[i][i] = 0;
    
    int a, b, c;
    while(m--){
        cin >> a >> b >> c;
        map[a][b] = min(map[a][b], c);        
    }

    for(int d = 1; d <= n; d++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                map[i][j] = min(map[i][j], map[i][d] + map[d][j]);
            }
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(map[i][j] != INF) cout << map[i][j];
            else cout << '0';
            cout << ' ';
        }
        cout << '\n';
    }
}