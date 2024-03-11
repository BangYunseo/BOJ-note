import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
listA = list(map(int, input().split()))
listB = list(map(int, input().split()))

M = int(input())
listC = list(map(int, input().split()))

res = deque()

for i in range(N):
    if listA[i] == 0:
        res.appendleft(listB[i])

for j in range(M):
    res.append(listC[j])
    print(res.popleft(), end = " ")