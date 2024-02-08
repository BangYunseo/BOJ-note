a, b, c = map(int, input().split())
res = sum((a, b, c)) - max((a, b, c))
if sum((a, b, c)) - max((a, b, c)) > max((a, b, c)):
    print(a + b + c)
else:
    print(res * 2 - 1)