#include <stdio.h>
#define SIZE 100

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    int A[N][M], B[N][M], S[N][M];
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            scanf("%d ", &A[i][j]);
    }       
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            scanf("%d ", &B[i][j]);
    }       
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            S[i][j] = A[i][j] + B[i][j];
            printf("%d ", S[i][j]);
        }   
        printf("\n");
    }       

    
    return 0;
}