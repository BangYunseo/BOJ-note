import sys
input = sys.stdin.readline

N, M = map(int, input().split())

arrA = []
arrB = []

for i in range(N):
    arr1 = list(map(int, input().split()))
    arrA.append(arr1)
    
for j in range(N):
    arr2 = list(map(int, input().split()))
    arrB.append(arr2)
    
for x in range(N):
    for y in range(M):
        print(arrA[x][y] + arrB[x][y], end = ' ')
    print()