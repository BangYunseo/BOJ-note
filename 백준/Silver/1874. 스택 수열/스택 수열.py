import sys
input = sys.stdin.readline

arr = []
res = []
now = 1
res2 = True

n = int(input())

for i in range(n):
    num = int(input())

    while now <= num:
        arr.append(now)
        res.append('+')
        now += 1
    if arr[-1] == num:
        arr.pop()
        res.append('-')
    else:
        res2 = False
    
if not res2:
    print("NO")
else:
    for z in res:
        print(z)