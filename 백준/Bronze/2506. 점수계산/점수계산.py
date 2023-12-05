N = int(input())
numList = list(map(int, input().split()))
score = 0
res = 0
for i in range(N):
    if (numList[i] == 1):
        score += 1
    else:
        score = 0
    res += score
print(res)