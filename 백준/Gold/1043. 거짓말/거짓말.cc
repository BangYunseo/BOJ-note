#include <iostream>
#include <vector>

using namespace std;

int findGroup(int parent[], int x){
    if(x != parent[x]) return parent[x] = findGroup(parent, parent[x]);
    else return parent[x];
}

void merge(int parent[], int x, int y){
    int px = findGroup(parent, parent[x]);
    int py = findGroup(parent, parent[y]);

    if(px != py){
        if(px < py) parent[py] = parent[px];
        else parent[px] = parent[py];
    }
}


int N, M, know_count;
int parent[51];

int main(){
    cin >> N >> M >> know_count;

    for(int i = 0; i <= N; i++){
        parent[i] = i;
        // 자신의 그룹으로 먼저 분류
    }

    int temp;
    while(know_count--){
        cin >> temp;
        parent[temp] = 0;
        // 진실을 알 경우 0 집합으로 분류
    }
    
    int pnum, temp2;
    int arr[51][51], arrsiz[51];

    for(int i = 0; i < M; i++){
        cin >> pnum >> temp;
        arrsiz[i] = pnum;
        // 파티 참여자 수 저장
        arr[i][0] = temp;
        // 첫 번째 사람만 참석할 경우 혼자 오기에 그룹을 합치지 않아도 됨

        for(int j = 1; j < pnum; j++){
            cin >> temp2;
            arr[i][j] = temp2;
            merge(parent, temp, temp2);
            // 파티에 오는 사람 그룹 병합
        }
    }

    int ans = M;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < arrsiz[i]; j++){
            if(findGroup(parent, parent[arr[i][j]]) == 0){
                ans--;
                break;
            }
        }
    }

    cout << ans;
}