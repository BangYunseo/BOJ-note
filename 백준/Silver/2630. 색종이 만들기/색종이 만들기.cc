#include <iostream>

using namespace std;

int N;
int arr[129][129] = {0, };
int white = 0, black = 0;

void paper(int n, int m, int size){
    bool cut = false;
    // 색종이를 잘라야 하는지 확인

    int first = arr[n][m];
    // 처음 색종이의 색을 저장
    for(int i = n; i < n + size; i++){
        for(int j = m; j < m + size; j++){
            if(arr[i][j] != first){
                // 만약 색종이의 색이 일정하지 않다면
                cut = true;
                // 색종이를 자름
                break;
            }
        }
    }
    if(cut){// cut == true
        paper(n, m, size / 2);
        // 왼쪽 위
        paper(n, m + size / 2, size / 2);
        // 오른쪽 위
        paper(n + size / 2, m, size / 2);
        // 왼쪽 아래
        paper(n + size / 2, m + size / 2, size / 2);
        // 오른쪽 아래
    }
    else{ // cut == false
        if(first == 1)
            black++;
        else
            white++;
    }
}
int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
            // 2차원 배열 입력받기
        }
    }
    paper(0, 0, N);
    // 함수 실행
    cout << white << endl;
    cout << black << endl;
    return 0;
}