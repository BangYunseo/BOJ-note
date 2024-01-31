area = [[0 for i in range(101)]for j in range(101)]
# 2차원 배열 선언
num = int(input())

for i in range(num):
    a, b = list(map(int, input().split()))
    for j in range(a, a + 10):
        for k in range(b, b + 10):
            area[j][k] = 1

res = 0
for x in area:
    res += x.count(1)
print(res)