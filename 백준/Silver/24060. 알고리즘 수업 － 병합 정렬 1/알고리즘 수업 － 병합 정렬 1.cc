#include <iostream>

using namespace std;

int N, K, K_count = 0;

void merge(int* A, int p, int q, int r, int k){
    int temp[r + 2];
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) temp[t++] = A[i++];
        else temp[t++] = A[j++];
    }
    while (i <= q)
        temp[t++] = A[i++];
    while (j <= r)  
        temp[t++] = A[j++];
    i = p, t = 1;
    while (i <= r){  
        A[i++] = temp[t++];
        if(++K_count == K) cout << temp[t-1];
    }
}

void mergeSort(int* A, int start, int end, int k){
    if(start < end){
        int q = (start + end) / 2;
        mergeSort(A, start, q, k);
        mergeSort(A, q + 1, end, k);
        merge(A, start, q, end, k);
    }
}

int main(){
    cin >> N >> K;
    
    int* A;
    A = new int[N];
    for(int i = 0; i < N; i++)
        cin >> A[i];
    mergeSort(A, 0, N-1, K);
    if(K_count < K) cout << -1;
}