#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v[100];
// 인접리스트

bool visited[100];
// 방문 확인

int comnum = 0;
// 감염된 컴퓨터의 수

void dfs(int a){
    visited[a] = true;
    // 방문한 표시(true)
    for(int i = 0; i < v[a].size(); i++){
        // 리스트에 있는 원소의 수 만큼 반복
        int temp = v[a][i];
        // temp 변수에 리스트의 원소 저장
        if(!visited[temp]){ // 만약 리스트 원소가 false인 경우 : 아직 방문하지 않은 경우
            dfs(temp);
            comnum++; // 감염된 컴퓨터 수 증가
        }
    }
}
int main(){
    int num, N;
    cin >> num >> N;
    for(int i = 0; i < N; i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        v[temp1].push_back(temp2);
        v[temp2].push_back(temp1);
        // 벡터에 삽입
    }
    dfs(1);
    // 컴퓨터 1에 감염된 컴퓨터의 수 출력
    cout << comnum << endl;
}