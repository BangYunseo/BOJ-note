import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
ballon = deque(enumerate(map(int, input().split())))
res = []

while ballon:
    index, paper = ballon.popleft()
    res.append(index + 1)
    
    if paper > 0:
        ballon.rotate(-(paper - 1))
    else:
        ballon.rotate(-paper)

for a in range(N):
    print(res[a], end = " ")