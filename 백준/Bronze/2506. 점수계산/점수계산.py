N = int(input())
scorelist = list(map(int, input().split()))
res = 0
add = 1
for i in range(N):
    if scorelist[i] == 0:
        add = 1
        continue
    res += add
    add += 1
print(res)