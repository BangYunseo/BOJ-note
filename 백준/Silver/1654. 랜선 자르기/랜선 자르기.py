import sys
input = sys.stdin.readline

N, K = map(int, input().split())
arr = []
plus = 1

for i in range(N):
    arr.append(int(input()))

res = max(arr)

while plus <= res:
    mid = (res + plus) // 2
    count = 0
    for a in arr:
        count += a // mid
    if count >= K:
        plus = mid + 1
    else:
        res = mid - 1
print(res)