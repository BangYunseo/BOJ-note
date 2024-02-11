import sys

res = 0
N, M = map(int, sys.stdin.readline().split())
CardList = list(map(int, sys.stdin.readline().split()))
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if CardList[i] + CardList[j] + CardList[k] > M:
                continue
            else:
                res = max(res, CardList[i] + CardList[j] + CardList[k])
print(res)