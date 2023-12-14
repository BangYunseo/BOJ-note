a = int(input())
res = 0
for i in range(a + 1):
    for j in range(i, a + 1):
        res += (i + j)
print(res)