#include <iostream>
#include <algorithm>

using namespace std;

int T, M, N, K, X, Y;
// count는 지역 변수로 선언 불가 

int arr[51][51] = {0, };

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
// 위쪽, 오른쪽, 아래쪽, 왼쪽 참조 
// 방향 탐색 문제에서 사용

// dfs 함수(깊이 우선 탐색)
void dfs(int x, int y){
    arr[x][y] = 0;
    // 입력받은 인덱스의 값을 0으로 설정
    for(int i = 0; i < 4; i++){
        // 방향 탐색
        int xx = x + dx[i];
        int yy = y + dy[i];


        // 만약 2차원 배열의 값을 벗어난 경우 
        if(xx < 0 || yy < 0 || xx >= M || yy >= N) continue;

        // 만약 arr[x][y]의 상하좌우 방향에 1이 있을 경우 깊이우선탐색 진행
        if(arr[xx][yy] == 1) dfs(xx, yy);
    }
}
int main(){
    cin >> T;
    int count = 0;
    // 
    for(int i = 0; i < T; i++){
        cin >> M >> N >> K;
    
        for(int j = 0; j < K; j++){
            cin >> X >> Y;
            arr[X][Y] = 1;
            // 입력받은 곳에 배추 심어짐
        }
        for(int a = 0; a < M; a++){
            for(int b = 0; b < N; b++){
                if(arr[a][b] == 1){
                    dfs(a, b);
                    count++;
                    // 깊이 우선 탐색을 진행한 후 count값 1씩 더함
                    // 해결되지 않는 부분 : dfs를 하나씩 진행하면 1의 수만큼 count값이 커지는 것 아닌가?
                    // -> dfs 함수에서 인덱스값을 0으로 초기화시키기 때문에 count값은 커지지 않고 그대로 지렁이가 필요한 수만큼 유지되는 것!
                }
            }
        }
        cout << count << endl;
        count = 0;
        for(int c = 0; c < M; c++)
            fill(arr[c], arr[c] + N, 0);
        // 2차원 배열, 지렁이 심은 숫자를 0으로 모두 초기화
    }
}