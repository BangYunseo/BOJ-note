#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string arr[100];
int visited[100][100] = {0, };
// 탐색한 경로 설정하는 2차원 배열
// 탐색을 완료한 경우 1, 탐색을 완료하지 않은 경우 0으로 설정함

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int N;

void dfs(int a, int b){
    // 상하좌우를 모두 탐색
    for(int i = 0; i < 4; i++){
        int xx = a + dx[i];
        int yy = b + dy[i];
        
        if(xx < 0 || yy < 0 || xx >= N || yy >= N) continue;
        if(visited[xx][yy] == 0 && arr[xx][yy] == arr[a][b]){
            // 방문한 적이 없으며 arr[xx][yy]의 색이 arr[a][b]의 색과 일치할 경우
            // 방문을 완료한 후 다시 dfs 실행
            visited[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
}


int main(){
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    // string 배열로 선언했으므로 문자열 형태로 입력받음
    // 2차원 배열 X, 문자열 형태 O
    int num = 0;

    // 적록색약이 아닌 경우
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(visited[i][j] == 0){
                // 만약 방문하지 않은 곳인 경우
                
                num++;
                visited[i][j] = 1;
                dfs(i, j);
                // 방문을 완료한 곳으로 만든 후 dfs 함수 실행
                // 즉, dfs 함수가 실행되는 곳은 색이 변한 곳이라는 의미
            }
        }
    }

    cout << num << " ";
    for(int i = 0;i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][j] == 'G') arr[i][j] = 'R';
            // 큰 따옴표를 쓰게 되면 오류 발생 : 문자열로 인식하기 때문
            // 하나의 문자만 고려할 경우 작은 따옴표 사용 필수
            // 만약 색이 G인 경우 R로 변환하여 적록색약이 색을 구분 못하는 문제를 해결해줌
        }
    }

    memset(visited, 0, sizeof(visited));
    // 방문의 완료 여부를 모두 0으로 초기화

    num = 0;

    // 적록색약인 경우
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(visited[i][j] == 0){
                // 만약 방문하지 않은 곳인 경우
                
                num++;
                visited[i][j] = 1;
                dfs(i, j);
                // 방문을 완료한 곳으로 만든 후 dfs 함수 실행
                // 즉, dfs 함수가 실행되는 곳은 색이 변한 곳이라는 의미
            }
        }
    }

    cout << num;
    return 0;
}
