import sys
input = sys.stdin.readline

ans = sys.maxsize
level = 0
N, M, B = map(int, input().split())
arr = [list(map(int, input().split())) for j in range(N)]

for a in range(257):
    use, take = 0, 0
    for i in range(N):
        for j in range(M):
            if arr[i][j] > a:
                take += arr[i][j] - a
            else:
                use += a - arr[i][j]
    if take + B >= use:
        if(take * 2) + use <= ans:
            ans = (take * 2) + use
            level = a

print(ans, level)