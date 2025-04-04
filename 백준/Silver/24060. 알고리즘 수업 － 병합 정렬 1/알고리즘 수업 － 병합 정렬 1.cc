#include <iostream>

using namespace std;

int N, K, K_count = 0;
// N = 배열의 크기
// K = 저장 횟수
// K_count = 실제 저장 횟수

// 두 부분으로 나뉜 배열 병합하는 함수
void merge(int* A, int p, int q, int r, int k){
    int temp[r - p + 1];
    // 병합할 부분 배열의 크기만큼 temp 배열 선언
    // 크기 = (r - p + 1)
    // temp[1]부터 사용하기 위해 설정한 배열 크기
    
    int i = p, j = q + 1, t = 1;
    // i = 왼쪽 부분 시작점
    // j = 중간지점 + 1(오른쪽 배열 시작점)
    // t = temp 배열 인덱스(1부터 사용);
    
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) temp[t++] = A[i++];
        else temp[t++] = A[j++];
    }
    // A[i]와 A[j] 비교 후 작은 값 temp[t++]에 저장 후 t 증감

    
    while (i <= q) temp[t++] = A[i++];
    while (j <= r) temp[t++] = A[j++];
    // 한 쪽 배열이 모두 소진된 경우
    // 남아있는 원소 temp 배열에 그대로 복사
    
    i = p, t = 1;
    while (i <= r){  
        A[i++] = temp[t++];
        if(++K_count == K) cout << temp[t-1];
    }
    // temp 배열의 정렬된 값을 원래 배열 A에 정렬
    // K 번째 저장된 값이 존재한 경우 그 값 출력
}

// 배열을 두 부분으로 분할 후 각각 정렬하고 병합하는 함수(재귀)
void mergeSort(int* A, int start, int end, int k){
    if(start < end){
        int q = (start + end) / 2;
        mergeSort(A, start, q, k);
        mergeSort(A, q + 1, end, k);
        merge(A, start, q, end, k);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> K;
    // N과 K를 입력받음
    
    int* A;
    A = new int[N];
    // 동적으로 할당받기 위한 포인터 사용!
    
    for(int i = 0; i < N; i++) cin >> A[i];
    mergeSort(A, 0, N-1, K);
    // A배열, 시작점 = 0, 끝점 = N-1(인덱스의 성질 : 인덱스는 0부터 값이 저장됨), 저장 횟수 = K를 매개 변수로 전달
    
    if(K_count < K) 
        cout << -1;
    // K번째로 저장되는 값이 없었을 경우 -1 출력
}