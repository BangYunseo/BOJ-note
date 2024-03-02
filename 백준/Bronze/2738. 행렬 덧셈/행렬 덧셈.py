N, M = map(int, input().split())
arrA = []
arrB = []
res = []
for i in range(N):
    arr1 = list(map(int, input().split()))
    arrA.append(arr1)
for j in range(N):
    arr2 = list(map(int, input().split()))
    arrB.append(arr2)
for a in range(N):
    for b in range(M):
        res.append(arrA[a][b] + arrB[a][b])
for x in range(0, len(res), M):
    for y in range(0, M):
        print(res[x + y], end = ' ')
    print()