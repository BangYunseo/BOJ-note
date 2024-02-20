import sys
input = sys.stdin.readline

N, M = map(int, input().split())
arr = set()
for i in range(N):
    arr.add(input())
count = 0
for j in range(M):
    word = input()
    if word in arr:
        count += 1
print(count)