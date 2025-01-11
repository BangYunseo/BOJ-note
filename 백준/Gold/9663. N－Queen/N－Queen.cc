#include <iostream>

using namespace std;

int arr[15];
int N, total = 0;

bool check(int lev){
    for(int i = 0; i < lev; i++){
        if(arr[i] == arr[lev] || abs(arr[lev] - arr[i]) == lev - i)
        // 대각선이거나 같은 라인
            return false;
            // arr[i] == X좌표 & i == Y좌표
            // 차이가 일정하다면 대각선에 위치
    }
    return true;
}

void nqueen(int a){
    if(a == N) total++;
    else{
        for(int i = 0; i < N; i++){
            arr[a] = i;
            if(check(a)) nqueen(a + 1);
            // 유효할 경우 다음 행의 퀸 배치
            // 유효하지 않을 경우 다른 위치의 퀸 배치
        }
    }
}

int main(){
    cin >> N;
    nqueen(0);
    cout << total;
}