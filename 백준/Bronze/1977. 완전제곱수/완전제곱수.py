M = int(input())
N = int(input())
res = 0
mini = 0
for i in range(1, 101):
    if (i * i <= N) and (i * i >= M):
        if res == 0:
            mini = i*i
        res += i*i
if res == 0:
    print(-1)
else:
    print(res)
    print(mini)