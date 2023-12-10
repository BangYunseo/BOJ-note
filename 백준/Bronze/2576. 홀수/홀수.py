res1 = 0
minV = 99
for i in range(7):
    a = int(input())
    if (a % 2 != 0):
        res1 += a
        if(a < minV):
            minV = a
if (res1 == 0):
    print(-1)
else:
    print(res1)
    print(minV)