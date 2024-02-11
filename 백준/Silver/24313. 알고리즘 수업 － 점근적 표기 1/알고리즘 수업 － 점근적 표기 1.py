fn1, fn2 = map(int, input().split())
c = int(input())
n0 = int(input())
if (c * n0 >= fn1 * n0 + fn2) and (fn1 <= c):
    print(1)
else:
    print(0)