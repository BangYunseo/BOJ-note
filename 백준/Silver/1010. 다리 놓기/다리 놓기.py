import sys
input = sys.stdin.readline

for i in range(int(input())):
    a, b = map(int, input().split())
    res1 = res2 = res3 = 1
    if a == b:
        print(1)
        continue
    elif a > b:
        a, b = b, a
    for j in range(b, 0, -1):
        res1 *= j
    for k in range(b-a, 0, -1):
        res2 *= k
    for l in range(a, 0, -1):
        res3 *= l
    print(res1 // (res2 * res3))