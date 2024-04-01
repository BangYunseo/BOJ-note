#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>


using namespace std;

int arr[25][25];
bool visited[25][25];
// 방문 여부 확인 배열
// 처음에는 모두 false로 초기화

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
// 상하좌우

vector<int> v;
// 단지 개수 저장할 벡터
int N;
int ct = 0;

void dfs(int a, int b){
    for(int i = 0; i < 4; i++){
        int xx = a + dx[i];
        int yy = b + dy[i];

        // 사전에 결정한 xx와 yy의 좌표가 인덱스를 넘어갈 경우
        if(xx < 0 || yy < 0 || xx >= N || yy >= N) continue;

        // 아직 방문하지 않은 곳이면서 arr[xx][yy]의 값이 1인 경우
        if(visited[xx][yy] == false && arr[xx][yy] == 1) {
            visited[xx][yy] = true;
            // 방문했음을 표시
            ct++;
            // 단지 수 증가
            dfs(xx, yy);
            // dfs 탐색
        }
    }
}

int main(){
    cin >> N;

    for(int a = 0; a < N; a++){
        for(int b = 0; b < N; b++){
            scanf("%1d", &arr[a][b]);
            // 하나씩 입력받는 배열을 보다 효율적으로 표현하기 위해
            // C언어의 scanf를 사용 
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((visited[i][j] == false) && (arr[i][j] == 1)){ 
                // 탐색하지 못한 곳이면서 arr[i][j]가 1의 값을 가질 경우
                visited[i][j] = true;
                // 탐색 완료 표시
                ct++;
                dfs(i, j);
                v.push_back(ct);
                ct = 0;
                // 다시 ct값을 초기화한 후 단지 수만큼 vector에 push
            }
        }
    }
    cout << v.size() << endl;
    // 전체 단지 종류 개수(3개)
    sort(v.begin(), v.end());
    // 시작부터 끝까지 정렬
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
    // 정렬된 값부터 출력
}