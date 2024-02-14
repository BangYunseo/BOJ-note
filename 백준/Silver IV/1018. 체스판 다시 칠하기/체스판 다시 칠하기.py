N, M = map(int, input().split())

arr = []
count = []

for i in range(N):
    arr.append(input())

for a in range(N - 7):
    for b in range(M - 7):
        indexN = 0
        indexM = 0
        for i in range(a, a + 8):
            for j in range(b, b + 8):
                if(i + j) % 2 == 0:
                    if arr[i][j] != 'W':
                        indexN += 1
                    if arr[i][j] != 'B':
                        indexM += 1
                else:
                    if arr[i][j] != 'B':
                        indexN += 1
                    if arr[i][j] != 'W':
                        indexM += 1
        count.append(min(indexN, indexM))
print(min(count))